#include <bits/stdc++.h>

using namespace std;

int primo(int x) {
        
    if(x==1)
    {
        return 2;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return 2;
        }
    }
    return 1;
}

int main() {

    int x, y;

    cin>>x>>y;

    if(primo(y)>1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        for(int i=(x+1);i<=y;i++)
        {
            if(i==y)
            {
                cout<<"YES"<<endl;
            }
            else if(primo(i)==1)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
    }

    return 0;
}