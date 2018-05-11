#include<iostream>
#include<string>
#include "funcionario.hpp"
#include "operario.hpp"
#include "gerente.hpp"
#include "secretaria.hpp"
#include "lista_funcionarios.hpp"
using namespace std;

int main(){
	Operario eu("Natan",1000,300,"FAB");
	Gerente g("Xico",2000,300,"asdasd",1);
	Secretaria s("Ana",1500,300,15);
	Lista_Funcionarios *novalista = new Lista_Funcionarios;
	novalista->addFuncionario(eu);
	novalista->addFuncionario(g);
	novalista->addFuncionario(s);
	novalista->removeFuncionario("Ana");
	novalista->mostrarFuncionariosLista();
	novalista->mostrarQtFuncionarios();






	return 0;

}