#include <bits/stdc++.h>

using namespace std;

int main() {

    string code;
    int n, r=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {   
        cin>>code;
        if(code[1]=='+')
        {
            r++;
        }
        else
        {
            r--;
        }
    }

    cout<<r<<endl;

    return 0;
}