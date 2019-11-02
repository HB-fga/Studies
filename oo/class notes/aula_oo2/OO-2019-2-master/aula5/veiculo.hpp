#include <iostream>
#include <string>

using namespace std;

class Veiculo{
    private:
        string marca;
        string modelo;
        string cor;
        int ano;
        int nrodas;
        float preco;
        float velocidadeMax;
        float velocidadeAtual;
    public:
        Veiculo();
        ~Veiculo();
        void acelera(float fatorAcelacao);
        void desacelera(float fatorAcelecao);
        void setCapacidade(int qtePessoas);
        int capacidade;
        int getCapacidade();
};