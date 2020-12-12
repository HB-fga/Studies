#include <stdio.h>

int main()
{
    int tam, ans = 0;
    char lado;

    int hist_d[40] = {};
    int hist_e[40] = {};

    while( scanf("%d %c", &tam, &lado) != EOF )
    {
        if(lado == 'D')
        {
            if(hist_e[tam-30] > 0)
            {
                hist_e[tam-30]--;
                ans++;
            }
            else
            {
                hist_d[tam-30]++;
            }
        }
        else if(lado == 'E')
        {
            if(hist_d[tam-30] > 0)
            {
                hist_d[tam-30]--;
                ans++;
            }
            else
            {
                hist_e[tam-30]++;
            }
        }
    }

    printf("%d\n", ans);

    return 0;
}