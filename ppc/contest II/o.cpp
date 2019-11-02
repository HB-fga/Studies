#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k, l, c, d, p, nl, np;
    int x, y, z;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    x=(k*l)/nl;
    y=(c*d);
    z=p/np;

    if(x<y && x<z)
    {
        cout<<(x/n)<<endl;
    }
    else if(y<x && y<z)
    {
        cout<<(y/n)<<endl;
    }
    else
    {
        cout<<(z/n)<<endl;
    }
    

    return 0;
}