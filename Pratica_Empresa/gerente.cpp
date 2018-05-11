#include<iostream>
#include<string>
#include "gerente.hpp"
using namespace std;

//CONSTRUTOR
Gerente::Gerente(string nameaux,double salarioaux,int dataADMaux,string senhaAux,int qtFuncionariosAux){
	this->name = nameaux;
	this->salario = salarioaux;
	this->dataADM = dataADMaux;
	this->senha = senhaAux;
	this->qtFuncionarios = qtFuncionariosAux;
	setStatus("Gerente");
}

//SETTERS
void Gerente::setSenha(string senhaAux){
	this->senha = senhaAux;
}

void Gerente::setQtFuncionarios(int qtFuncionariosAux){
	this->qtFuncionarios = qtFuncionariosAux;
}

//GETTERS

string Gerente::getSenha(){
	return this->senha;
}

int Gerente::getQtFuncionarios(){
	return this->qtFuncionarios;
}