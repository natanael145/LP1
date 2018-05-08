#ifndef CHOCOLATE_H
#define CHOCOLATE_H
#include <string>
#include "produto_nduravel.hpp"
using namespace std;

class Chocolate : public Produto_NaoDuravel {
    protected:
        string sabor;
        string peso;
    public:
        //SETTERS
        void setSabor(string saboraux);
        void setPeso(string tamaux);
        //GETTERS
        string getSabor();
        string getPeso();
};


#endif