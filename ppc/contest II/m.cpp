#include <bits/stdc++.h>

using namespace std;

int main() {

    char name[110];
    int ch[300]={0};
    int c=0;

    cin>>name;

    for(int i=0;name[i]!='\0';i++)
    {
        ch[name[i]]++;
    }

    for(int i=97;i<=122;i++)
    {
        if(ch[i]>0)
        {
            c++;
        }
    }

    if(c%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    

    return 0;
}