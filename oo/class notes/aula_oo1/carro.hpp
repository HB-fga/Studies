#include <iostream>
#include <string>

using namespace std;

class Carro {
    private:
        string marca;
        string modelo;
        string cor;
        int ano;
        int bancos;
        float preco;
        float velmax;
        float velatual;
    public:
        Carro();
        ~Carro();
        void aceleraCarro(float fator_acel);
        void desaceleraCarro(float fator_acel);
};