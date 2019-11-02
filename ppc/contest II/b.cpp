#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {

    char s1[110];
    char s2[110];

    cin>>s1;
    cin>>s2;

    for(int i=0;i<strlen(s1);i++)
    {
        if(s1[i]==s2[i])
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }

    cout<<"\n";

    return 0;
}