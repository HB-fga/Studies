#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, r=0;
    char s[65010];

    cin>>x;
    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        if((s[i]-'0')%2==0)
        {
            r+=(i+1);
        }
    }

    cout<<r<<endl;

    return 0;
}