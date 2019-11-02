#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, c=0;
    int hist[300]={};
    char s[110];

    cin>>x;
    cin>>s;

    if(x<26)
    {
        cout<<"NO\n";
    }
    else
    {
        for(int i=0;i<strlen(s);i++)
        {
            if(s[i]<'a')
            {
                s[i]+=('a'-'A');
            }

            hist[s[i]]++;
        }

        for(int i=0;i<300;i++)
        {
            if(hist[i]>0)
            {
                c++;
            }
        }

        if(c>=26)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }

    return 0;
}