#include <bits/stdc++.h>

using namespace std;

int main() {

    char s[120];
    int x=0;

    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        switch(x)
        {
            case 0:
                if(s[i]=='h')
                    x++;
                break;
            case 1:
                if(s[i]=='e')
                    x++;
                break;
            case 2:
                if(s[i]=='l')
                    x++;
                break;
            case 3:
                if(s[i]=='l')
                    x++;
                break;
            case 4:
                if(s[i]=='o')
                {
                    cout<<"YES\n";
                    return 0;
                }
        }
    }

    cout<<"NO\n";

    return 0;
}