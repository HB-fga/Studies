#include <bits/stdc++.h>

using namespace std;

int main() {

    char s[100];
    int ases=0;

    cin>>s;

    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='a')
        {
            ases++;
        }
    }

    if(ases>(strlen(s)/2))
    {
        cout<<strlen(s)<<endl;
    }
    else
    {
        cout<<(ases*2)-1<<endl;
    }
    

    return 0;
}