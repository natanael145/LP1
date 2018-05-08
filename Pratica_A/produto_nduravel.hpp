#ifndef PRODUTO_NDURAVEL_H
#define PRODUTO_NDURAVEL_H
#include <string>
#include "produto.hpp"
using namespace std;

class Produto_NaoDuravel : public Produto{
    protected:
        string exp_date;
        string gen;
    public:
        //SETTERS
        void setExp_Date(string date_exp_aux);
        void setGen(string genaux);
        //GETTERS
        string getExp_Date();
        string getGen();

};


#endif