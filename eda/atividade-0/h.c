#include <stdio.h>

int main() {

    int c;
    int ans = 0;

    scanf("%d", &c);

    for(int i = 0;c >= 0;i++, c--)
    {
        if(i>10)
            ans++;
        if(i>30)
            ans++;
        if(i>100)
            ans += 3;
    }

    ans += 7;

    printf("%d\n", ans);

    return 0;
}