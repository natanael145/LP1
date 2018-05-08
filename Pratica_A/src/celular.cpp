#include <iostream>
#include <string>
#include "../include/celular.hpp"
#include "../include/produto_duravel.hpp"
using namespace std;

//SETTERS

void Celular::setRam(string ramaux){
    this->ram = ramaux;
}

void Celular::setMP(string mpaux){
    this->megapixels = mpaux;
}

//GETTERS

string Celular::getRam(){
    return this->ram;
}

string Celular::getMP(){
    return this->megapixels;
}