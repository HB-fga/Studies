#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x, y, r=0;
    int l0=0, l1=0, r0=0, r1=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        if(x==0)
        {
            l0++;
        }
        else
        {
            l1++;
        }
        if(y==0)
        {
            r0++;
        }
        else
        {
            r1++;
        }
    }

    if(l0>l1)
    {
        r+=l1;
    }
    else
    {
        r+=l0;
    }
    if(r0>r1)
    {
        r+=r1;
    }
    else
    {
        r+=r0;
    }
    
    cout<<r<<endl;

    return 0;
}