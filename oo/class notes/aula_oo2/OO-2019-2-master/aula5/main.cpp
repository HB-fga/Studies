#include <iostream>
#include "veiculo.hpp"
#include "caminhao.hpp"

using namespace std;

int main() {
    
    Veiculo carro;
    Veiculo *carro2;
    Caminhao carreta;

    carro2 = new Veiculo();

    delete carro2;

    return 0;
}