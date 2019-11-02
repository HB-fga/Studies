#include <iostream>
#include "carro.hpp"

using namespace std;

int main() {

    Carro carro_1;

    char acao='x';
    float fator;

    while(1)
    {
        cout<<"Acelerar = a"<<endl;
        cout<<"Desacelerar = d"<<endl;
        cout<<"Sair do carro = s"<<endl;

        cin>>acao;

        if(acao=='a')
        {
            cin>>fator;
            carro_1.aceleraCarro(fator);
        }
        else if(acao=='d')
        {
            cin>>fator;
            carro_1.desaceleraCarro(fator);
        }
        else
        {
            break;
        }
        
        
    }

    cout<<"fim."<<endl;

    return 0;
}