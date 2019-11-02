#include <vector>
#include <iostream>

#define TAMANHO_VETOR 10

using namespace std;

int main() {

    vector <int> casa(TAMANHO_VETOR);

    int id = 11;

    try
    {
        if(id>TAMANHO_VETOR)
            throw(-1);
        casa.at(id) = 100;
        cout<<"dado x: "<< casa.at(id) << endl;
    }
    catch(int i)
    {
        cout<<"Deu erro - Tipo de erro = "<<i<<endl;
    }

    return 0;
}