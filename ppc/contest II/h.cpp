#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, max, min, r=0;
    int x;

    cin>>n;
    cin>>x;
    max=x;
    min=x;

    for(int i=1;i<n;i++)
    {
        cin>>x;
        if(x>max)
        {
            max=x;
            r++;
        }
        if(x<min)
        {
            min=x;
            r++;
        }
    }

    cout<<r<<endl;

    return 0;
}