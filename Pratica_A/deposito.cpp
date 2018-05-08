#include <iostream>
#include "deposito.hpp"
#include <vector>

Deposito::Deposito(){}

Deposito::~Deposito(){
	this->vetor.clear();
	this->vetor.~vector();
}

void Deposito::addProduto(Produto add){
	this->vetor.push_back(add);
	//this->vetor[(int)this->vetor.size()-1] = add;
}

void Deposito::remProduto(string nome_produto){
	int aux, i;
	for(i=0; i<(int)this->vetor.size(); i++){
		if(this->vetor[i].getName() == nome_produto){
			aux = i;
			break;
		}
	}
	this->vetor.erase(vetor.begin()+aux);
}

void Deposito::qtdProdutos(){
	cout << "O depósito tem " << this->vetor.size() << " Produto(s)." << endl;
}
/*
void Deposito::listProduto(){
	if((int)this->vetor.size() > 0){
		int maior = 0;
		for(int i=0; i<(int)this->vetor.size(); i++){
			if(this->vetor[maior].getPrice() <= this->vetor[i].getPrice()){maior = i;}
		}
		cout << "Produto com maior preço: " << this->vetor[maior].getName();
		cout << " -> " << this->vetor[maior].getPrice() << endl;
		return;
	}
	else{
		cout << "Erro: depósito vazio!" << endl;
	}
}
*/