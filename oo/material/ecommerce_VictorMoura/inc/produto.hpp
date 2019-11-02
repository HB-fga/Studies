#ifndef PRODUTO_HPP
#define PRODUTO_HPP
#include <vector>
#include <iostream>
#include <string>
#include "comentario.hpp"

class Produto {
    private:
        double preco;
        double peso;
        long long quantidade;
        std::string nome;
        std::vector<Comentario> comentarios;
    public:
        Produto();
        
        double get_preco();
        void set_preco(double preco);

        double get_peso();
        void set_peso(double peso);

        long long get_quantidade();
        void set_quantidade(long long quantidade);

        std::string get_nome();
        void set_nome(std::string nome);

        void add_comentario(Comentario comentario);
        std::vector<Comentario> get_comentarios();
};

#endif