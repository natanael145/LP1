#include <iostream>
#include <string>
#include "../include/produto_nduravel.hpp"
#include "../include/chocolate.hpp"

using namespace std;

//SETTERS
void Chocolate::setSabor(string saboraux){
    this->sabor = saboraux;
}

void Chocolate::setPeso(string tamaux){
    this->peso = tamaux;
}
//GETTERS

string Chocolate::getSabor(){
    return this->sabor;
}
string Chocolate::getPeso(){
    return this->peso;
}