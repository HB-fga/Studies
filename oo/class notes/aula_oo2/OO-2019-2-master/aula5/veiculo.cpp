#include "veiculo.hpp"

Veiculo::Veiculo(){
    cout << "Criou o Veiculo" << endl;
    velocidadeAtual = 0.0;
    velocidadeMax =  220.0;
}
Veiculo::~Veiculo()
{
    cout << "Destruiu o Veiculo" << endl;
}

void Veiculo::setCapacidade(int qtePessoas)
{
    if (qtePessoas > 0){
        capacidade = qtePessoas;
    }
}
int Veiculo::getCapacidade()
{
    return this->capacidade;
}