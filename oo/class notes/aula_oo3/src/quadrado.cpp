#include "quadrado.hpp"

Quadrado::Quadrado()
{
    set_tipo("Quadrado");
    set_base(5.0);
    set_altura(get_base());
}
Quadrado::Quadrado(float base, float altura)
{
    if(base != altura)
        throw(1);
    set_base(base);
    set_altura(base);
}
Quadrado::~Quadrado()
{

}