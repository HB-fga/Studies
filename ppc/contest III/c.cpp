#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int x, y, z;
    int r=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;

        if(x+y+z>1)
        {
            r++;
        }
    }

    cout<<r<<endl;

    return 0;
}