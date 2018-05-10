#include<iostream>
#include<string>
#include "data.hpp"
using namespace std;

//CONSTRUTOR
Data::Data(int dia,int mes,int ano){
	this->dia = dia;
	this->mes = mes;
	this->ano = ano;
	this->diasTotais = dia + (mes*30);
}