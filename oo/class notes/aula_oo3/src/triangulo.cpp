#include "triangulo.hpp"

Triangulo::Triangulo()
{
    set_tipo("Triangulo");
    set_base(5.0);
    set_altura(8.0);
}
Triangulo::Triangulo(float base, float altura)
{
    set_base(base);
    set_altura(altura);
}
float Triangulo::calcula_area()
{
    return get_base() * get_altura() / 2;
}
float Triangulo::calcula_perimetro()
{
    return get_base() * get_altura() / 2;
}