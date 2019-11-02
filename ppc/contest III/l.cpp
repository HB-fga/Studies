#include <bits/stdc++.h>

using namespace std;

int main() {

    unsigned long long int n, k, ans;

    cin>>n>>k;

    if(k<=(n/2)+(n%2))
    {
        ans=(2*k)-1;
    }
    else
    {
        ans=2*(k-((n/2)+(n%2)));
    }
    
    cout<<ans<<endl;

    return 0;
}