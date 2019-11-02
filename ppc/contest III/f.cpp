#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, h, t=0;
    int ans=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>h;
        t+=h;
    }

    t=t%(n+1);

    if((t+1)%(n+1)!=1)
    {
        ans++;
    }
    if((t+2)%(n+1)!=1)
    {
        ans++;   
    }
    if((t+3)%(n+1)!=1)
    {
        ans++;
    }
    if((t+4)%(n+1)!=1)
    {
        ans++;
    }
    if((t+5)%(n+1)!=1)
    {
        ans++;
    }

    cout<<ans<<endl;

    return 0;
}