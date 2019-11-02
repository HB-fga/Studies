#include <bits/stdc++.h>

using namespace std;

int main() {

    int f=0;
    char s[110];

    cin>>s;

    for(int i=1;i<strlen(s);i++)
    {
        if(s[i]>='a')
        {
            f=1;
        }
    }

    if(f!=1)
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]>='a')
            {  
                s[i]=toupper(s[i]);
            }
            else
            {
                s[i]=tolower(s[i]);
            }
        }
    }

    cout<<s<<endl;
    

    return 0;
}