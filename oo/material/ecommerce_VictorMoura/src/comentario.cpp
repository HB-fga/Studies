#include "comentario.hpp"
#include <string>

Comentario::Comentario(){
    this->titulo = "";
    this->autor = "";
    this->texto = "";
}

std::string Comentario::get_titulo(){
    return this->titulo;
}

std::string Comentario::get_autor(){
    return this->autor;
}

std::string Comentario::get_texto(){
    return this->texto;
}

void Comentario::set_titulo(std::string titulo){
    this->titulo = titulo;
}

void Comentario::set_autor(std::string autor){
    this->autor = autor;
}

void Comentario::set_texto(std::string texto){
    this->texto = texto;
}