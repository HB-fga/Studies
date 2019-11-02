#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, smax=-1, smin=110, pmax=0, pmin=0, ans=0;
    int s[110];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>s[i];

        if(s[i]>smax)
        {
            smax=s[i];
            pmax=i;
        }
        if(s[i]<=smin)
        {
            smin=s[i];
            pmin=i;
        }
    }

    ans+=pmax;
    ans+=n-1-pmin;

    if(pmax>pmin)
    {
        ans--;
    }

    cout<<ans<<endl;

    return 0;
}