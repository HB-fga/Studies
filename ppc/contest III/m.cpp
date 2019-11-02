#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, ct, min, ans, f=0;

    cin>>n;
    cin>>min;
    ans=1;

    for(int i=1;i<n;i++)
    {
        cin>>ct;
        if(ct<min)
        {
            f=0;
            min=ct;
            ans=(i+1);
        }
        else if(ct==min)
        {
            f=1;
        }
    }

    if(f==0)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"Still Rozdil"<<endl;
    }
    
    return 0;
}