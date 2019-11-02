#include <bits/stdc++.h>

using namespace std;

int main() {

    double y1;
    int x, y2;

    cin>>x;

    y1=cbrt(x);
    y2=y1;

    if((y1-y2)<0.00000001)
    {
        cout<<y2<<endl;
    }
    else
    {
        cout<<"-1\n";
    }

    return 0;
}