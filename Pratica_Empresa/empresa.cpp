#include<iostream>
#include<string>
#include "empresa.hpp"
using namespace std;

//CONSTRUTOR
Empresa::Empresa(string nameEmpresaAux,string cnpjAux){
    this->nameEmpresa = nameEmpresaAux;
    this->cnpj = cnpjAux;
}
//SETTERS
void Empresa::setNameEmpresa(string nameEmpresaAux){
    this->nameEmpresa = nameEmpresaAux;
}

void Empresa::setCNPJ(string cnpjAux){
    this->cnpj = cnpjAux;
}

//GETTERS

string Empresa::getNameEmpresa(){
    return this->nameEmpresa;
}

string Empresa::getCNPJ(){
    return this->cnpj;
}