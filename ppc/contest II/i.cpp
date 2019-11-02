#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, x, y, max=0, r=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        r-=x;
        r+=y;
        if(r>max)
        {
            max=r;
        }
    }

    cout<<max<<endl;

    return 0;
}