#include<iostream>
#include<string>
#include "funcionario.hpp"
using namespace std;

void Funcionario::setStatus(string statusAux){
	status = statusAux;
}
string Funcionario::getStatus(){
	return status;
}
//SETTERS
void Funcionario::setName(string nameaux){
	this->name = nameaux;
}

void Funcionario::setSalario(double salarioaux){
	this->salario = salarioaux;
}

void Funcionario::setDataADM(int dataADMaux){
	this->dataADM = dataADMaux;
}	

//GETTERS

string Funcionario::getName(){
	return this->name;
}

double Funcionario::getSalario(){
	return this->salario;
}

int Funcionario::getDataADM(){
	return this->dataADM;
}