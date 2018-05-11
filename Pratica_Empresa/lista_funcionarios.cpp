#include <iostream>
#include "lista_funcionarios.hpp"
#include <vector>

Lista_Funcionarios::Lista_Funcionarios(){}

Lista_Funcionarios::~Lista_Funcionarios(){
	this->vetor.clear();
}

void Lista_Funcionarios::addFuncionario(Funcionario novoFuncionario){
	this->vetor.push_back(novoFuncionario);
}

void Lista_Funcionarios::removeFuncionario(string nameSearch){
	int aux, i;
	for(i=0; i<(int)this->vetor.size(); i++){
		if(this->vetor[i].getName() == nameSearch){
			aux = i;
			break;
		}
	}
	this->vetor.erase(vetor.begin()+aux);
}

void Lista_Funcionarios::mostrarQtFuncionarios(){
	cout << "O empresa tem " << this->vetor.size() << " funcionário(s)." << endl;
}
void Lista_Funcionarios::mostrarFuncionariosLista(){
	cout << "Funcionarios da empresa:" <<endl;
	for(int i = 0; i<(int)this->vetor.size();i++){
		cout <<"Nome : " <<this->vetor[i].getName()<<"  | Salário : "<< this->vetor[i].getSalario()<<" | Profissão : " <<this->vetor[i].getStatus() <<endl;
	}
}
