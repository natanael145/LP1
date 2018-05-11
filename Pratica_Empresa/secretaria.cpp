#include<iostream>
#include<string>
#include "secretaria.hpp"
using namespace std;


Secretaria::Secretaria(string nameaux,double salarioaux,int dataADMaux,int ramalaux){
    this->name = nameaux;
	this->salario = salarioaux;
	this->dataADM = dataADMaux;
    this->ramal = ramalaux;
    setStatus("Secretaria");
}
//SETTERS
void Secretaria::setRamal(int ramalaux){
    this->ramal = ramalaux;
}
//GETTERS
int Secretaria::getRamal(){
    return this->ramal;
}