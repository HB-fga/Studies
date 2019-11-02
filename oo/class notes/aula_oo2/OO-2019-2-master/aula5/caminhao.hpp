#ifndef CAMINHAO_H_
#define CAMINHAO_H_
#include "veiculo.hpp"

using namespace std;

class Caminhao : public Veiculo {
    private:
        float carga;
        float altura;
        float comprimento;
        string tipo_carga;
    public:
        Caminhao(string marca);
        ~Caminhao();
        void set_tipo_carga();
        void carrega();
        void descarrega();
};

#endif
