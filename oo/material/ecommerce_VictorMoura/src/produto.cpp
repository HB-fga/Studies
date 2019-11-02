#include "produto.hpp"
#include "comentario.hpp"
#include <vector>
#include <string>

Produto::Produto(){
    this->preco = 0.0;
    this->peso = 0.0;
    this->quantidade = 0;
    this->nome = "";
}

double Produto::get_preco(){
    return this->preco;
}

void Produto::set_preco(double preco){
    this->preco = preco;
}

double Produto::get_peso(){
    return this->peso;
}

void Produto::set_peso(double peso){
    this->peso = peso;
}

long long Produto::get_quantidade(){
    return this->quantidade;
}

void Produto::set_quantidade(long long quantidade){
    this->quantidade = quantidade;
}

std::string Produto::get_nome(){
    return this->nome;
}

void Produto::set_nome(std::string nome){
    this->nome = nome;
}

void Produto::add_comentario(Comentario comentario){
    this->comentarios.push_back(comentario);
}

std::vector<Comentario> Produto::get_comentarios(){
    return this->comentarios;
}