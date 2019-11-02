#include <bits/stdc++.h>
#include "comentario.hpp"
#include "produto.hpp"
#include "carrinho.hpp"

int main(){
    // Usando a classe comentário
    Comentario c;
    c.set_titulo("Meu titulo");
    c.set_autor("Victor Moura");
    c.set_texto("Muito bom");
    std::cout << c.get_titulo() << std::endl;

    // Usando a classe produto
    Produto p;
    p.set_nome("Produto 1");
    p.set_preco(10.0);
    p.set_peso(10.5);
    p.set_quantidade(2);
    std::cout << p.get_nome() << std::endl;

    // Usando as classes comentário e produto ao mesmo tempo
    p.add_comentario(c);

    std::cout << "Comentarios: " << std::endl;
    for(auto &comentario : p.get_comentarios()){
        std::cout << "\t" << comentario.get_titulo() << "(" + comentario.get_autor() + "):" << std::endl;
        std::cout << "\t\t" << comentario.get_texto() << std::endl;
    }

    // Usando a classe Carrinho
    Carrinho carr = Carrinho();
    std::cout << carr.get_total() + carr.get_frete() << std::endl;

    // Usando todas as classes ao mesmo tempo
    carr.add_produto(p);

    std::cout << "Carrinho: " << std::endl;
    for(auto &produto : carr.get_produtos()){
        std::cout << "\t" + produto.get_nome() + " - " << produto.get_preco() << " x " << produto.get_quantidade() << std::endl;
    }
    std::cout << "Total: " << carr.get_total() << "/Frete: " << carr.get_frete() << std::endl;
    std::cout << "Valor final: " << carr.get_total() + carr.get_frete() << std::endl;

    return 0;
}