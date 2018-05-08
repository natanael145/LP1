#ifndef REFRI_H
#define REFRI_H
#include <string>
#include "../include/produto_nduravel.hpp"
using namespace std;

class Refrigerante : public Produto_NaoDuravel {
    protected:
        string sabor;
        string tamanho;
    public:
        //SETTERS
        void setSabor(string saboraux);
        void setTamanho(string tamaux);
        //GETTERS
        string getSabor();
        string getTamanho();
};


#endif