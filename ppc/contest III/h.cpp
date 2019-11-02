#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int x[210];
    int y[210];
    int c1=0, c2=0, c3=0, c4=0, ans=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }

    for(int i=0;i<n;i++)
    {
        c1=0;
        c2=0;
        c3=0;
        c4=0;

        for(int j=0;j<n;j++)
        {
            if(x[j]>x[i] && y[i]==y[j])
            {
                c1++;
            }
            if(x[j]<x[i] && y[i]==y[j])
            {
                c2++;
            }
            if(y[j]>y[i] && x[i]==x[j])
            {
                c3++;
            }
            if(y[j]<y[i] && x[i]==x[j])
            {
                c4++;
            }
            if(c1>0 && c2>0 && c3>0 & c4>0)
            {
                ans++;
                break;
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}