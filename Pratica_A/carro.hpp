#ifndef CARRO_H
#define CARRO_H
#include "produto_duravel.hpp"
#include <string>
using namespace std;

class Carro : public Produto_Duravel{
    protected:
        string ano;
        string cavalos;
    public:
        //SETTERS
        void setAno(string anoaux);
        void setCavalos(string cavalosaux);
        //GETTERS
        string getAno();
        string getCavalos();
};


#endif