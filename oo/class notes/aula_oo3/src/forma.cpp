#include "forma.hpp"

Forma::Forma()
{
    tipo = "Genérico";
    base = 1.0f;
    altura = 1.0f;
}
Forma::Forma(float base, float altura)
{
    tipo = "Genérico";
    this->base = base;
    this->altura = altura;
}
Forma::Forma(std::string tipo, float base, float altura)
{
    set_tipo(tipo);
    set_base(base);
    set_altura(altura);
}
Forma::~Forma(){

}
void Forma::set_tipo(std::string tipo)
{
    this->tipo = tipo;
}
std::string Forma::get_tipo()
{
    return tipo;
}
void Forma::set_base(float base)
{
    if(base < 0)
        throw(1);
    else
        this->base = base;
}
float Forma::get_base()
{
    return base;
}
void Forma::set_altura(float altura)
{
    if(altura < 0)
        throw(1);
    else
        this->altura = altura;
}
float Forma::get_altura()
{
    return altura;
}