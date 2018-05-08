#include <iostream>
#include <string>
#include "../include/produto.hpp"
#include "../include/produto_duravel.hpp"
using namespace std;

//SETTERS

void Produto_Duravel::setMaterial(string materialaux){
    this->material = materialaux;
}

void Produto_Duravel::setDurability(string durabilityaux){
    this->durability = durabilityaux;
}

//GETTERS

string Produto_Duravel::getMaterial(){
    return this->material;
}

string Produto_Duravel::getDurability(){
    return this->durability;
}