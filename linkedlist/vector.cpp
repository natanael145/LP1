#include <iostream>
#include "vector.hpp"
#include <vector>
using namespace std;

Lista_Funcionarios::Lista_Funcionarios(){}

Lista_Funcionarios::~Lista_Funcionarios(){
	this->vetor.clear();
}

void Lista_Funcionarios::addFuncionario(void* ptr){
    this->vetor.push_back(ptr);
    cout << "asdasd"<<endl;
}
void Lista_Funcionarios::mostrarFuncionariosLista(){
	cout << "Funcionarios da empresa:" <<endl;
	for(int i = 0; i<(int)this->vetor.size();i++){
        cout <<(*(Funcionario*) this->vetor[i] )<<endl;
    }
}
