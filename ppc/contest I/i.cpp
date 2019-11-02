#include <bits/stdc++.h>

using namespace std;

int main() {

    int c=0;
    char st[30];

    cin>>st;

    for(int i=0;st[i]!='\0';i++)
    {
        if(st[i]!='7' && st[i]!='4')
        {}
        else
        {
            c++;
        }
        
    }

    if(c==7 || c==4)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}