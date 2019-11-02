#include <bits/stdc++.h>

using namespace std;

int main() {

    int x, i=0;
    char ano[4];

    cin>>x;

    for(int i=1;;i++)
    {
        ano[3]='0'+((x+i)%10);
        ano[2]='0'+(((x+i)/10)%10);
        ano[1]='0'+(((x+i)/100)%10);
        ano[0]='0'+(((x+i)/1000)%10);

        if(ano[0]!=ano[1] && ano[0]!=ano[2] && ano[0]!=ano[3] && ano[1]!=ano[2] && ano[1]!=ano[3] && ano[2]!=ano[3])
        {
            cout<<ano[0]<<ano[1]<<ano[2]<<ano[3]<<endl;
            break;
        }
    }

    return 0;
}