#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, cd, f=0;
    int k[110];
    int ans;

    cin>>n>>cd;

    for(int i=0;i<n;i++)
    {
        cin>>k[i];
    }

    for(int i=0;f!=n;i++)
    {
        if(i==n)
        {
            i=0;
        }

        k[i]-=cd;
        
        if(k[i]<=0)
        {
            f++;
            ans=(i+1);
        }
        else
        {
            f=0;
        }
    }

    cout<<ans<<endl;

    return 0;
}