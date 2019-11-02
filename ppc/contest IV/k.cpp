#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k, t, ans;

    cin>>n>>k;

    t=240-k;

    ans=n;

    for(int i=1;i<=n;i++)
    {
        if(t-(i*5)>=0)
        {
            t=t-(i*5);
        }
        else
        {
            ans=(i-1);
            break;
        }
    }

    cout<<ans<<endl;

    return 0;
}