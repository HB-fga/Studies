#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, n;
    int cx;
    int c=1, ult, sum=0;

    cin>>n>>m;

    cin>>ult;
    sum+=ult;

    for(int i=1;i<n;i++)
    {
        if(c==m)
        {
            cout<<sum<<endl;
            return 0;
        }

        cin>>cx;

        if(cx<=ult)
        {
            c++;
            ult=cx;
            sum+=ult;
        }

    }

    cout<<sum<<endl;

    return 0;
}