#include <bits/stdc++.h>

/*
porque eu nao posso fazer isso:
<<<<>>>>
    ^*3

<<<<>
   ^*3

<>
Remove 1

>
good string!

output:"1"
*/


using namespace std;

int main() {

    int x, y, l, r, ans;
    char s[110];

    cin>>x;

    for(int i=0;i<x;i++)
    {
        l=0;
        r=0;

        cin>>y;
        cin>>s;

        for(int i=0;i<y;i++)
        {
            if(s[i]=='>') {break;}
            l++;
        }
        for(int i=(y-1);i>=0;i--)
        {
            if(s[i]=='<') {break;}
            r++;
        }

        if(l<r)
        {
            ans=l;
        }
        else
        {
            ans=r;
        }

        cout<<ans<<endl;
    }

    return 0;
}