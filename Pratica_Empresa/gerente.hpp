#ifndef GERENTE_H
#define GERENTE_H
#include<string>
#include "funcionario.hpp"
using namespace std;
class Gerente : public Funcionario
{

protected:
	string senha;
	int qtFuncionarios;
public:
	//CONSTRUTOR E DESTRUTOR
	Gerente(string nameaux,double salarioaux,int dataADMaux,string senhaAux,int qtFuncionariosAux);
	//SETTERS
	void setSenha(string senhaAux);
	void setQtFuncionarios(int qtFuncionariosAux);
	//GETTERS
	string getSenha();
	int getQtFuncionarios();

};

#endif