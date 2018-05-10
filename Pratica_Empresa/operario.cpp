#include<iostream>
#include<string>
#include "operario.hpp"
using namespace std;

//CONSTRUTOR
Operario::Operario(){

}

//SETTERS
void Operario::setNameFab(string NameFabAux){
	this->NameFab = NameFabAux;
}
//GETTERS

string Operario::getNameFab(){
	return this->NameFab;
}