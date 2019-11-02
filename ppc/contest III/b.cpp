#include <bits/stdc++.h>

using namespace std;

int main() {

    string x, y;

    cin>>x>>y;

    for(int i=0;x[i]!='\0';i++)
    {
        if(x[i]<'a')
        {
            x[i]+=('a'-'A');
        }

        if(y[i]<'a')
        {
            y[i]+=('a'-'A');
        }
    }

    if(x<y)
    {
        cout<<"-1"<<endl;
    }
    else if(y<x)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
    
    

    return 0;
}