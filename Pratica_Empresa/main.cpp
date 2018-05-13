#include<iostream>
#include<string>
#include "funcionario.hpp"
#include "operario.hpp"
#include "gerente.hpp"
#include "secretaria.hpp"
#include "lista_funcionarios.hpp"
using namespace std;
//g++ -o empresa -Wall -ansi -pedantic -O0 -g main.cpp funcionario.cpp operario.cpp gerente.cpp secretaria.cpp lista_funcionarios.cpp -std=c++11
int main(){
	Operario eu("Natan",1000,300,"FAB");
	Gerente g("Xico",2000,300,"asdasd",1);
	Secretaria s("Ana",1500,300,15);
	Secretaria sa("Ana",1500,300,15);
	Lista_Funcionarios *novalista = new Lista_Funcionarios;
	novalista->addFuncionario(eu);
	novalista->addOperario(eu);
	novalista->addFuncionario(g);
	novalista->addFuncionario(s);
	novalista->addFuncionario(sa);
	novalista->mostrarFuncionariosLista();
	novalista->aumentarSalario(eu);
	novalista->aumentarSalarioOperario(eu);
	novalista->aumentarSalario(s);
	novalista->aumentarSalario(g);
	novalista->mostrarFuncionariosLista();
	novalista->removeFuncionario("Ana");
	novalista->mostrarFuncionariosLista();
	novalista->mostrarQtFuncionarios();
	
	return 0;

}
