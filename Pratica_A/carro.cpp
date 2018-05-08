#include <iostream>
#include <string>
#include "carro.hpp"
#include "produto_duravel.hpp"
using namespace std;

//SETTERS

void Carro::setAno(string anoaux){
    this->ano = anoaux;
}

void Carro::setCavalos(string cavalosaux){
    this->cavalos = cavalosaux;
}

//GETTERS

string Carro::getAno(){
    return this->ano;
}

string Carro::getCavalos(){
    return this->cavalos;
}