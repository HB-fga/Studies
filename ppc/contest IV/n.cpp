#include <bits/stdc++.h>

using namespace std;

int sumd(int x) {

    int sum=0;

    while(x!=0)
    {
        sum+=x%10;
        x=x/10;
    }

    return sum;
}

int main() {

    int p[10010];
    int n;

    for(int i=19, j=0;j<10001;i++)
    {
        if(sumd(i)==10)
        {
            p[j]=i;
            j++;
        }
    }

    cin>>n;

    cout<<p[(n-1)]<<endl;

    return 0;
}