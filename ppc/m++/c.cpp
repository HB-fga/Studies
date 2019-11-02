#include <bits/stdc++.h>

using namespace std;

int main() {

    int ip;
    double p, m=11, ans, n[7];

    cin>>p;

    for(int i=0;i<7;i++)
    {
        cin>>n[i];
    }

    for(int i=0;i<7;i++)
    {
        if(n[i]<m)
        {
            m=n[i];
            ip=i;
        }
    }
    n[ip]=0;

    m=-1;
    for(int i=0;i<7;i++)
    {
        if(n[i]>m)
        {
            m=n[i];
            ip=i;
        }
    }
    n[ip]=0;

    ans=0;
    for(int i=0;i<7;i++)
    {
        ans+=n[i];
    }

    ans=ans/5;
    ans=ans*p;

    printf("%.1lf\n", ans);

    return 0;
}