#include <bits/stdc++.h>

using namespace std;

int main() {

    int m[5][5];
    int pi, pj;
    int f=0;


    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>m[i][j];
        }
    }

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(m[i][j]==1)
            {
                pi=i;
                pj=j;
                f=1;
                break;
            }

        }
        if(f==1)
        {
            break;
        }
    }

    pi-=2;
    pj-=2;
    if(pi<0)
    {
        pi*=-1;
    }
    if(pj<0)
    {
        pj*=-1;
    }

    cout<<pi+pj<<endl;

    return 0;
}