#include <bits/stdc++.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    string teclas;
    cin >> teclas;

    map<char, int> mapa;

    for (int i = 0; i < n; i++) {
        mapa[teclas[i]] = 3;
        if (teclas[i] >= 65 and teclas[i] <= 90) {
            mapa[teclas[i] + 32] = 3;
        } else if (teclas[i] >= 97 and teclas[i] <= 122) {
            mapa[teclas[i] - 32] = 3;
        }
        //cout << teclas[i] << endl;
    }

    int m;
    cin >> m;
    scanf("%*c");
    
    for (int i = 1; i <= m; i++) {
        bool achou = false;

        char mensagem[1010];
        cin.getline(mensagem, 1010);        

        for (int j = 0; j <strlen(mensagem); j++) {
            //cout << mapa[mensagem[j]] << endl;
            if (mapa[mensagem[j]] == 3) {
                achou = true;
                break;
            }
        }

        if (achou) {
            cout << "Mensagem #" << i << ": Carlos" << endl;
        } else {
            cout << "Mensagem #" << i << ": Beto ou Carlos" << endl;
        }
    }
    
    return 0;
}