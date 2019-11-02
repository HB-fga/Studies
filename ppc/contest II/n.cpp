#include <bits/stdc++.h>

using namespace std;

int main() {

    char a[110];
    char b[110];
    char c[110];
    int ar1[300]={0};
    int ar2[300]={0};

    cin>>a;
    cin>>b;
    cin>>c;

    for(int i=0;a[i]!='\0';i++)
    {
        ar1[a[i]]++;
    }

    for(int i=0;b[i]!='\0';i++)
    {
        ar1[b[i]]++;
    }

    for(int i=0;c[i]!='\0';i++)
    {
        ar2[c[i]]++;
    }

    for(int i=0;i<300;i++)
    {
        if(ar1[i]!=ar2[i])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }

    cout<<"YES"<<endl;

    return 0;
}