#include <bits/stdc++.h>

using namespace std;

int main() {

    string code;

    cin>>code;

    for(int i=0;code[i]!='\0';i++)
    {
        switch (code[i])
        {
            case 'H':
            case 'Q':
            case '9':
                cout<<"YES"<<endl;
                return 0;
        }
    }

    cout<<"NO"<<endl;

    return 0;
}