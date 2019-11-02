#include <bits/stdc++.h>

using namespace std;



int main() {

    int fib;
    int fb[55];
    
    fb[0]=0;
    fb[1]=1;

    for(int i=2;i<50;i++)
    {
        fb[i]=fb[i-1]+fb[i-2];
    }

    cin>>fib;

    if(fib==0)
    {
        cout<<"0 "<<"0 "<<"0"<<endl;
    }
    else if(fib==1)
    {
        cout<<"0 "<<"0 "<<"1"<<endl;
    }
    else
    {
        for(int i=2;i<50;i++)
        {
            if(fib==fb[i])
            {
                cout<<"0 "<<fb[i-2]<<" "<<fb[i-1]<<endl;
            }
        }
    }

    return 0;
}