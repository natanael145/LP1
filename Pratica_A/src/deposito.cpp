#include <iostream>
#include "../include/deposito.hpp"
#include <vector>

Deposito::Deposito(){}

Deposito::~Deposito(){
	this->vetor.clear();
}

void Deposito::addProduto(Produto item){
	this->vetor.push_back(item);
}

void Deposito::removeProduto(string nameSearch){
	int aux, i;
	for(i=0; i<(int)this->vetor.size(); i++){
		if(this->vetor[i].getName() == nameSearch){
			aux = i;
			break;
		}
	}
	this->vetor.erase(vetor.begin()+aux);
}

void Deposito::qtProdutos(){
	cout << "O depósito tem " << this->vetor.size() << " Produtos." << endl;
}

void Deposito::MostrarProdutoMaisCaro(){
	if((int)this->vetor.size() > 0){
		int maior = 0;
		for(int i=0; i<(int)this->vetor.size(); i++){
			if(this->vetor[maior].getPrice() <= this->vetor[i].getPrice()){maior = i;}
		}
		cout << "Produto com maior preço é: " << this->vetor[maior].getName();
		cout << " e custa : " << this->vetor[maior].getPrice() << endl;
		return;
	}
	else{
		cout << "Depósito vazio!" << endl;
	}
}
