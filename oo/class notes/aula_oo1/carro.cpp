#include "carro.hpp"

//CONSTRUTOR
Carro::Carro(){
    cout<<"Criou o carro"<<endl;
    velatual=0.0;
    velmax=220.0;
}

//DESTRUTOR
Carro::~Carro()
{
    cout<<"Destruiu o carro"<<endl;
}



/*
void Carro::setBancos(int pessoas)
{
    if(pessoas>0)
    {
        bancos=pessoas;
    }
}

int Carro::getBancos()
{
    return this->bancos;
}*/