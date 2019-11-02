#include "carro.hpp"
#include <unistd.h>

//CONSTRUTOR
Carro::Carro(){
    cout<<"Criou o carro"<<endl;
    cout<<"Modelo:"<<endl;
    cin>>modelo;
    cout<<"Cor:"<<endl;
    cin>>cor;
    cout<<"Velocidade Maxima:"<<endl;
    cin>>velmax;

    velatual=0.0;
}

//DESTRUTOR
Carro::~Carro()
{
    cout<<"Destruiu o carro"<<endl;
}

void Carro::aceleraCarro(float fator_acel)
{
    cout<<velatual<<endl;

    fator_acel+=velatual;

    while(velatual<fator_acel)
    {
        if(velatual==velmax)
        {
            break;
        }
        sleep(1);
        velatual++;
        cout<<velatual<<endl;
    }

    if(velatual==velmax)
    {
        cout<<"O carro esta em chamas!"<<endl;
    }
}
void Carro::desaceleraCarro(float fator_acel)
{
    cout<<velatual<<endl;

    fator_acel*=(-1);
    fator_acel+=velatual;

    while(velatual>fator_acel)
    {
        if(velatual==0)
        {
            break;
        }
        sleep(1);
        velatual--;
        cout<<velatual<<endl;
    }

    if(velatual==0)
    {
        cout<<"O carro esta parado!"<<endl;
    }
}