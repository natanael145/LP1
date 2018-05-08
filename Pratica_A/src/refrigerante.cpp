#include <iostream>
#include <string>
#include "../include/produto_nduravel.hpp"
#include "../include/refrigerante.hpp"
using namespace std;

//SETTERS
void Refrigerante::setSabor(string saboraux){
    this->sabor = saboraux;
}

void Refrigerante::setTamanho(string tamaux){
    this->tamanho = tamaux;
}
//GETTERS

string Refrigerante::getSabor(){
    return this->sabor;
}
string Refrigerante::getTamanho(){
    return this->tamanho;
}