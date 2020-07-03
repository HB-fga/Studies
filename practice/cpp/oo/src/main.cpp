#include "square.hpp"

#include <iostream>

using namespace std;

int main() {

    int aux;

    Rectangle meu_retangulo;

    cout << "lado A = " << meu_retangulo.get_a_side() << endl;
    cout << "lado B = " << meu_retangulo.get_b_side() << endl;
    cout << "area = " << meu_retangulo.calculate_area() << endl;

    cout << "definir novo lado A: ";
    cin >> aux;

    meu_retangulo.set_a_side(aux);

    cout << "definir novo lado B: ";
    cin >> aux;

    meu_retangulo.set_b_side(aux);

    cout << "area do retangulo = " << meu_retangulo.calculate_area() << endl;

    return 0;
}