#include<iostream>
#include<string>
#include "funcionario.hpp"
using namespace std;

//CONSTRUTOR
Funcionario::Funcionario(string nameaux,double salarioaux, string dataADMaux){
	this->name = nameaux;
	this->salario = salarioaux;
	this->dataADM = dataADMaux;
}
//SETTERS
void Funcionario::setName(string nameaux){
	this->name = nameaux;
}

void Funcionario::setSalario(double salarioaux){
	this->salario = salarioaux;
}

void Funcionario::setDataADM(string dataADMaux){
	this->dataADM = dataADMaux;
}	

//GETTERS

string Funcionario::getName(){
	return this->name;
}

double Funcionario::getSalario(){
	return this->salario;
}

string Funcionario::getDataADM(){
	return this->dataADM;
}