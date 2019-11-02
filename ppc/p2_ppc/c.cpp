#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

int fat(int x) {
        
        int aux=x-1;
        
        while(aux>1)
        {
            x*=aux;
            aux--;
        }

        return x;
    }

int main() {

    int x=720, i=6, ar[300]={};
    char a;

    cin>>a;
    ar[a]++;
    cin>>a;
    ar[a]++;
    cin>>a;
    cin>>a;
    ar[a]++;
    cin>>a;
    ar[a]++;
    cin>>a;
    cin>>a;
    ar[a]++;
    cin>>a;
    ar[a]++;

    for(int i=0;i<300;i++)
    {
        if(ar[i]!=0)
        {
            x/=fat(ar[i]);
        }
    }

    cout<<x<<endl;    

    return 0;
}