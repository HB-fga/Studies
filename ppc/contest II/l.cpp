#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {

    int n, x;
    char st[110];

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>st;
        if(strlen(st)>10)
        {
            cout<<st[0]<<(strlen(st)-2)<<st[strlen(st)-1]<<endl;
        }
        else
        {
            cout<<st<<endl;
        }
    }

    return 0;
}