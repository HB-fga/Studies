#ifndef CARRINHO_HPP
#define CARRINHO_HPP
#include <vector>
#include <iostream>
#include "produto.hpp"

class Carrinho {
    private:
        double total;
        double frete;
        std::vector<Produto> produtos;
    public:
        Carrinho();
        double get_total();
        double get_frete();
        std::vector<Produto> get_produtos();
        void add_produto(Produto produto);
        void finalizar_compra();
        void cancelar_compra();
};

#endif