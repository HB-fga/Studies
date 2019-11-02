#include <iostream>
#include <string>

using namespace std;

class Onibus {
    private:
        int pontos;
        float tarifa;
        bool tem_bagageiro;
        bool tem_acessibilidade;
        bool eh_articulado;
    public:
        Onibus();
        ~Onibus();
};