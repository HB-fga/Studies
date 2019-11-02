#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, c=0, r=0;
    char s[110];

    cin>>x;
    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='x')
        {
            c++;
            if(c>=3)
            {
                r++;
            }
        }
        else
        {
            c=0;
        }
    }

    cout<<r<<endl;

    return 0;
}