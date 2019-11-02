#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    int x, y;
    
    cin>>n;

    x=sqrt(n);
    y=x;

    if(x*y<n) x++;
    if(x*y<n) x++;

    cout<<(x+y)<<endl;

    return 0;
}