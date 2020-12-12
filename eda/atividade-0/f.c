#include <stdio.h>

int main() {

    int t, a;
    int ans;

    scanf("%d %d", &t, &a);

    ans=a/(t-1);
    if(a%(t-1) != 0)
        ans++;

    printf("%d\n", ans);

    return 0;
}