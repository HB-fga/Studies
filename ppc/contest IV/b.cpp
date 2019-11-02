#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, A=0, D=0;
    char s[100010];

    cin>>x;
    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='A')
        {
            A++;
        }
        else
        {
            D++;
        }
    }

    if(A>D)
    {
        cout<<"Anton"<<endl;
    }
    else if(A<D)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
    

    return 0;
}