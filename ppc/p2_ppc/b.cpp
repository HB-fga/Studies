#include <bits/stdc++.h>

using namespace std;

int main() {

    long long int m, n, dinheiro, soma=0, min;

    cin>>m>>n;

    for(int i=0;i<n;i++)
    {
        cin>>dinheiro;
        if(i==0)
        {
            min=dinheiro;
        }

        soma+=dinheiro;

        if(soma<min)
        {
            min=soma;
        }
    }

    if(min>0)
    {
        min=0;
    }
    else
    {
        min*=-1;
    }
    
    if(min>m)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<min<<endl;
    }
    

    return 0;
}