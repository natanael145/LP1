#ifndef LIVRO_H
#define LIVRO_H
#include "../include/produto_duravel.hpp"
#include <string>
using namespace std;

class Livro : public Produto_Duravel{
    protected:
        string nome;
        string qtpaginas;
    public:
        //SETTERS
        void setNome(string nomeaux);
        void setPaginas(string paginasaux);
        //GETTERS
        string getNome();
        string getPaginas();
};


#endif