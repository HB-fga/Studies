#include <bits/stdc++.h>

using namespace std;

int main() {

    double n, sum, r;
    double suco[110];

    sum=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>suco[i];
        sum+=suco[i];
    }

    r=sum/n;

    cout<<r<<endl;

    return 0;
}