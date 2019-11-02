#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "forma.hpp"

class Triangulo : public Forma{
public:
    Triangulo();
    Triangulo(float base, float altura);
    ~Triangulo();
    float calcula_area();
    float calcula_perimetro();
};

#endif