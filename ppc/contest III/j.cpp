#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, b, c;
    int la, lb, lc;
    int ans;

    cin>>a>>b>>c;

    la=sqrt((a*b)/c);
    lb=a/la;
    lc=c/lb;

    ans=(la*4)+(lb*4)+(lc*4);

    cout<<ans<<endl;

    return 0;
}