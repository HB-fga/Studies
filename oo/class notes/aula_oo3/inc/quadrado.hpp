#ifndef QUADRADO_HPP
#define QUADRADO_HPP

#include "forma.hpp"

class Quadrado : public Forma{
public:
    Quadrado();
    Quadrado(float base, float altura);
    ~Quadrado();
};

#endif