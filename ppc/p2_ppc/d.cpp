#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    double m, x = 0.0, taxa;
    double ans;

    cin>>m>>t;

    for(int i=0;i<t;i++)
    {
        cin>>taxa;
        double pertaxa = taxa / 100.00;
        if (i == 0) {
            x = 2.0 + pertaxa;
        } else {
            x = (x * pertaxa) + x + 1.0;
        }

    }
    ans = m / x;

    if (ans > 100000) {
        cout << "impossivel" << endl;
    } else {
        int valor = (int)ans;
        double parte = ans - valor;
        parte = parte * 100;
        int parteint = (int)parte;
        if (parteint != parte) {
            if (parteint == 99) {
                valor++;
            }
            parteint++;
        }
        string teste = to_string(valor);
        string verdade = "";
        if (teste.size() > 3) {
            for (int z = 0; z < teste.size(); z++) {
                if (z == teste.size() - 3) {
                    verdade += ".";
                }
                verdade += teste[z];
            }
        }
        cout << "R$ " << verdade << ",";
        if (parteint < 10) {
            cout << "0" << parteint << endl;
        } else {
            cout << parteint << endl;
        }
    }

    return 0;
}