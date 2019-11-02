#include <bits/stdc++.h>

using namespace std;

int main() {

    int x;
    
    cin>>x;

    if(x%2==1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(int i=1;i<=x;i+=2)
        {
            cout<<(i+1)<<" "<<i;
            if(i==x-1)
            {
                cout<<endl;
            }
            else
            {
                cout<<" ";
            }
        }
    }
    
    return 0;
}