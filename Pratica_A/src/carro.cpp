#include <iostream>
#include <string>
#include "../include/carro.hpp"
#include "../include/produto_duravel.hpp"
using namespace std;

//CONSTRUTOR
Carro::Carro(string name,string descrip,string fab_date,string ano,string cavalos,double price,string marca,string material,string durabilit){
    this->name = name;
	this->price = price;
	this->trademark = marca;
	this->fab_date = fab_date;
	this->material = material;
	this->durability = durabilit;
	this->cavalos = cavalos;
    this->description = descrip;
    this->ano = ano;
}

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