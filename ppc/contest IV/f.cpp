#include <bits/stdc++.h>

using namespace std;

int main() {

    int ans=0;
    int x;
    char s[110];
    char p='a';

    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        x=p-s[i];
        if(x<0) x*=-1;
        if(x>13) x=(x-26)*-1;

        ans+=x;

        p=s[i];
    }

    cout<<ans<<endl;

    return 0;
}