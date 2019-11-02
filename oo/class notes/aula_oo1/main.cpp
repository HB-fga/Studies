#include <iostream>
#include "carro.hpp"

using namespace std;

int main() {

    Carro meu_carro;
    Carro *carro2; //ponteiro
    
    carro2 = new Carro(); //alocando
    carro2->setBancos(10);
    meu_carro.setBancos(5);

    cout<<"Capacidade do carro "<<meu_carro.getBancos()<<endl;

    return 0;
}