#ifndef FORMA_HPP
#define FORMA_HPP
#include <iostream>
#include <string>

class Forma {
private:
    std::string tipo;
    float base;
    float altura;
public:
    Forma();
    Forma(float base, float altura);
    Forma(std::string tipo, float base, float altura);
    ~Forma();
    void set_tipo(std::string tipo);
    std::string get_tipo();
    void set_base(float base);
    float get_base();
    void set_altura(float altura);
    float get_altura();
    float calcula_area();
    float calcula_perimetro();
};

#endif