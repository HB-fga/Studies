#ifndef COMENTARIO_HPP
#define COMENTARIO_HPP
#include <iostream>
#include <string>

class Comentario {
    private:
        std::string titulo;
        std::string autor;
        std::string texto;
    public:
        Comentario();
        std::string get_titulo();
        std::string get_autor();
        std::string get_texto();

        void set_titulo(std::string titulo);
        void set_autor(std::string autor);
        void set_texto(std::string texto);        
};
#endif