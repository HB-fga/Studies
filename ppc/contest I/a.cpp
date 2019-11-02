#include <bits/stdc++.h>

using namespace std;

int main() {

    int n,a,b,c,suma,sumb,sumc;

    cin>>n;
    suma=0;
    sumb=0;
    sumc=0;
    while(n--){
        cin>>a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;
    } 
    if(suma ==0 && sumb ==0 && sumc==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}