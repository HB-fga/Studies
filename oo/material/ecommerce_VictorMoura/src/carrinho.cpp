#include "carrinho.hpp"
#include "produto.hpp"
#include <vector>

Carrinho::Carrinho(){
    this->total = 0.0;
    this->frete = 0.0;
}

double Carrinho::get_total(){
    return this->total;
}

double Carrinho::get_frete(){
    return this->frete;
}

std::vector<Produto> Carrinho::get_produtos(){
    return this->produtos;
}

void Carrinho::add_produto(Produto produto){
    double total_produto = produto.get_preco() * produto.get_quantidade();
    double frete_produto = 0.1 * produto.get_peso();

    this->produtos.push_back(produto);
    this->total += total_produto;
    this->frete += frete_produto;
}

void Carrinho::finalizar_compra(){
    // #ToDo: class FormaDePagamento (Credito, Dinheiro, ...)
}

void Carrinho::cancelar_compra(){
    this->total = 0.0;
    this->frete = 0.0;
    this->produtos.clear();
}