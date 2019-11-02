#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int main() {

    int m, n;
    int k[3010]={};
    char a1[3010][12];
    char a2[3010][12];
    char l[12];

    cin>>m>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a1[i]>>a2[i];

        if(strlen(a1[i])<=strlen(a2[i]))
        {
            k[i]=0;
        }
        else
        {
            k[i]=1;
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>l;
        for(int j=0;j<n;j++)
        {
            if(strcmp(l, a1[j])==0)
            {
                if(k[j]==0)
                {
                    cout<<a1[j];
                }
                else
                {
                    cout<<a2[j];
                }

                if(i!=(m-1))
                {
                    cout<<" ";
                }
                else
                {
                    cout<<endl;
                }
            }
            if(strcmp(l, a2[j])==0)
            {
                if(k[j]==0)
                {
                    cout<<a1[j];
                }
                else
                {
                    cout<<a2[j];
                }

                if(i!=(m-1))
                {
                    cout<<" ";
                }
                else
                {
                    cout<<endl;
                }
            }
        }
    }

    return 0;
}