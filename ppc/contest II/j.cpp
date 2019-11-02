#include <bits/stdc++.h>

using namespace std;

int convert(char a) {
   
    int x;

    x=a-'0';

    return x;
}

int main() {

    char ch[110];
    int nu[110];
    int size=0, x=0, min, swap, p;

    cin>>ch;

    for(int i=0;;i+=2)
    {
        nu[size]=convert(ch[i]);
        size++;
        if(ch[i+1]=='\0')
        {break;}
    }
    
    for(int i=0;i<size;i++)
    {
        min=nu[x];
        p=x;
        for(int j=(x+1);j<size;j++)
        {
            if(nu[j]<min)
            {
                min=nu[j];
                p=j;
            }
        }
        swap=nu[x];
        nu[x]=nu[p];
        nu[p]=swap;
        x++;
    }
    
    for(int i=0;i<size;i++)
    {
        cout<<nu[i];
        if(i!=(size-1))
        {
            cout<<"+";
        }
        else
        {
            cout<<endl;
        }
        
    }

    return 0;
}