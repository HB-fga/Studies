#include <bits/stdc++.h>

using namespace std;

int main() {

    char x;

    cout<<"Tabela ASCII:\n\n";

    for(int i=0;i<128;i++)
    {
        x=i;
        cout<<i<<" = ["<<x<<"]\n";
    }

    return 0;
}