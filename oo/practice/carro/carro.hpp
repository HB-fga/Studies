#include <iostream>
#include <string>

using namespace std;

class Carro {
    private:
        string modelo;
        string cor;
        int ano; //*
        float preco; //*
        float velmax;
        float velatual;
    public:
        Carro();
        ~Carro();
        void aceleraCarro(float fator_acel);
        void desaceleraCarro(float fator_acel);
};