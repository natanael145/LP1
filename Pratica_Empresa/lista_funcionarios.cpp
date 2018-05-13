#include <iostream>
#include "lista_funcionarios.hpp"
#include <vector>

Lista_Funcionarios::Lista_Funcionarios(){}

Lista_Funcionarios::~Lista_Funcionarios(){
	this->vetor.clear();
}
//FUNÇÕES QUE VERIFICAM SE O USUARIO JÁ ESTÁ NA LISTA,SE NAO ESTIVER ADCIONA,SE ESTIVER ERRO
void Lista_Funcionarios::addFuncionario(Funcionario novoFuncionario){
	verificarFuncionario(novoFuncionario,novoFuncionario.getName());
}
void Lista_Funcionarios::addOperario(Operario novoOp){
	vetorOperario.push_back(novoOp);
}
void Lista_Funcionarios::verificarFuncionario(Funcionario novoFuncionario,string nameFuncionario){
	for(int i = 0; i<(int)this->vetor.size();i++){
		if(nameFuncionario == this->vetor[i].getName()){
			cout << "Este funcionário já está cadastradado!"<<endl;
			return;
		}
	}
		this->vetor.push_back(novoFuncionario);
		cout << "Funcionário adcionado com sucesso!"<<endl;
}
//FUNÇÃO QUE REMOVE UM FUNCIONARIO DA LISTA
void Lista_Funcionarios::removeFuncionario(string nameSearch){
	int aux, i;
	for(i=0; i<(int)this->vetor.size(); i++){
		if(this->vetor[i].getName() == nameSearch){
			aux = i;
			cout << "Funcionário : " <<this->vetor[i].getName()<< " removido(a)."<<endl;
			break;
		}
	}
	this->vetor.erase(vetor.begin()+aux);
}
//MOSTRA QUANTOS FUNCIONÁRIOS TEM A EMPRESA
void Lista_Funcionarios::mostrarQtFuncionarios(){
	cout << "O empresa tem " << this->vetor.size() << " funcionário(s)." << endl;
}
//MOSTRA OS FUNCIONARIOS DA EMPRESA E SEUS DADOS
void Lista_Funcionarios::mostrarFuncionariosLista(){
	cout << "Funcionarios da empresa:" <<endl;
	for(int i = 0; i<(int)this->vetor.size();i++){
		this->vetor[i].infos(this->vetor[i]);
		if(this->vetor[i].getStatus() == "Operario"){
			for(int i = 0; i<(int)this->vetorOperario.size();i++){
				this->vetorOperario[i].infos(this->vetorOperario[i]);
			}
		}
	}
	
}

void Lista_Funcionarios::atualizarDados(Funcionario funcionarioAtt){
	for(int i = 0;i<(int)this->vetor.size();i++){
		if(this->vetor[i].getName()== funcionarioAtt.getName()){
			this->vetor[i] = funcionarioAtt;
			return;
		}
	}
}

void Lista_Funcionarios::atualizarDadosOperario(Operario opAtt){
	for(int j = 0; j<(int)this->vetorOperario.size();j++){
		if(this->vetorOperario[j].getName() == opAtt.getName()){
			this->vetorOperario[j] = opAtt;
			return;
		}
	}
}

void Lista_Funcionarios::aumentarSalario(Funcionario funcionarioAux){
	if(funcionarioAux.getStatus() == "Secretaria"){
		double valorAumento = 0.08 * funcionarioAux.getSalario();
		double novoSalario = funcionarioAux.getSalario() + valorAumento;
		funcionarioAux.setSalario(novoSalario);
		atualizarDados(funcionarioAux);
	}
	else if(funcionarioAux.getStatus() == "Gerente"){
		double valorAumento = 0.1 * funcionarioAux.getSalario();
		double novoSalario = funcionarioAux.getSalario() + valorAumento;
		funcionarioAux.setSalario(novoSalario);
		atualizarDados(funcionarioAux);
	}

}

void Lista_Funcionarios::aumentarSalarioOperario(Operario opAux){
	double valorAumento = 0.05 * opAux.getSalario();
	double novoSalario = opAux.getSalario() + valorAumento;
	opAux.setSalario(novoSalario);
	atualizarDadosOperario(opAux);
}