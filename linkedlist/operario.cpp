#include<iostream>
#include<string>
#include "operario.hpp"
using namespace std;

ostream& operator<< (ostream &o,Operario &opPrint){
	o <<"Nome : "<<opPrint.getName() <<"| Salario: " <<opPrint.getSalario()<<"| Profissão: " <<opPrint.getStatus()<<" |Fabrica: " <<opPrint.getNameFab() <<endl;
	return o;
}

void Operario::infos(Operario opPrint){
	cout << opPrint;
}
//CONSTRUTOR
Operario::Operario(string nameaux,double salarioaux,int dataADMaux,string nameFabAux){
	this->name = nameaux;
	this->salario = salarioaux;
	this->dataADM = dataADMaux;
	this->NameFab = nameFabAux;
	setStatus("Operario");
}

//SETTERS
void Operario::setNameFab(string NameFabAux){
	this->NameFab = NameFabAux;
}
//GETTERS

string Operario::getNameFab(){
	return this->NameFab;
}