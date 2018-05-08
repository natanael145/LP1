#include <iostream>
#include <string>
#include "produto_nduravel.hpp"
#include "pizza.hpp"

using namespace std;

//SETTERS
void Pizza::setSabor(string saboraux){
    this->sabor = saboraux;
}

void Pizza::setTamanho(string tamaux){
    this->tamanho = tamaux;
}
//GETTERS

string Pizza::getSabor(){
    return this->sabor;
}
string Pizza::getTamanho(){
    return this->tamanho;
}