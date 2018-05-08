#ifndef PRODUTO_DURAVEL_H
#define PRODUTO_DURAVEL_H
#include "../include/produto.hpp"
#include <string>
using namespace std;

class Produto_Duravel : public Produto{
    protected:
        string material;
        string durability;
    public:
        //SETTERS
        void setMaterial(string materialaux);
        void setDurability(string durabilityaux);
        //GETTERS
        string getMaterial();
        string getDurability();
};


#endif