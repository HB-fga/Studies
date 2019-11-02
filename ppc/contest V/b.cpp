#include <bits/stdc++.h>

using namespace std;

int main() {

    int m, ps, aux;
    int c, n;
    int p[100];

    cin>>c>>n;

    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }

    for(int j=0;j<n;j++)
    {
        m=-1;
        for(int i=j;i<n;i++)
        {
            if(p[i]>m)
            {
                m=p[i];
                ps=i;
            }
        }
        aux=p[j];
        p[j]=p[ps];
        p[ps]=aux;
    }

    m=p[0]-p[c-1];

    for(int i=1;((c-1)+i)<n;i++)
    {
        ps=(c-1)+i;
        
        if((p[i]-p[ps])<m)
        {
            m=p[i]-p[ps];
        }
    }

    cout<<m<<endl;

    return 0;
}