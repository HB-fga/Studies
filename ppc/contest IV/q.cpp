#include <bits/stdc++.h>

using namespace std;

int main()
{

    int i,j,k;
    int n,m;
    int a,b;

    scanf("%d%d%d",&n,&a,&b);

    if(a>b)
        swap(a,b);

    m=0;
    for(i=1;i<=n-1;i++)
    {
        j=a/i;
        k=b/(n-i);

        if(j>=1 && k>=1)
            m=max(m,min(j,k));
    }

    printf("%d",m);

    return 0;
}