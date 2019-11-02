#include <bits/stdc++.h>

using namespace std;

int main() {

    char s[210];

    cin>>s;

    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<1;
            }
            else if(s[i+1]=='-')
            {
                cout<<2;
            }
            i++;
        }
    }
    cout<<endl;

    return 0;
}