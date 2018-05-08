#ifndef CARRO_H
#define CARRO_H
#include "../include/produto_duravel.hpp"
#include <string>
using namespace std;

class Carro : public Produto_Duravel{
    protected:
        string ano;
        string cavalos;
    public:
        Carro(string name,string descrip,string fab_date,string ano,string cavalos,double price,string marca,string material,string durabilit);
        //SETTERS
        void setAno(string anoaux);
        void setCavalos(string cavalosaux);
        //GETTERS
        string getAno();
        string getCavalos();
};


#endif