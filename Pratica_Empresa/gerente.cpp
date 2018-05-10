#include<iostream>
#include<string>
#include "gerente.hpp"
using namespace std;

//CONSTRUTOR
Gerente::Gerente(){

}

//SETTERS
void Gerente::setSenha(string senhaAux){
	this->senha = senhaAux;
}

void Gerente::setQtFuncionarios(int qtFuncionariosAux){
	this->qtFuncionarios;
}

//GETTERS

string Gerente::getSenha(){
	return this->senha;
}

int Gerente::getQtFuncionarios(){
	return this->qtFuncionarios;
}