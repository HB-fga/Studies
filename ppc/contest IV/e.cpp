#include <bits/stdc++.h>

using namespace std;

int main() {

    set <string> names;
    string s;
    int x, y;

    cin>>x;

    for(int i=0;i<x;i++)
    {
        y=names.size();
        cin>>s;
        names.insert(s);

        if(names.size()==y) cout<<"YES\n";
        else cout<<"NO\n";
        
    }

    return 0;
}