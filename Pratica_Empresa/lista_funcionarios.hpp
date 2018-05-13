#ifndef LISTA_H
#define LISTA_H
	#include <vector>
	using namespace std;
	#include "funcionario.hpp"
	#include "operario.hpp"
	
	class Lista_Funcionarios
	{
	protected:
		std::vector<Funcionario> vetor;//Nosso vector
	public:
		std::vector<Operario> vetorOperario;
		Lista_Funcionarios();//Construtor padrão
		
		~Lista_Funcionarios();//Destrutor padrão
		
		void verificarFuncionario(Funcionario novoFuncionario,string nameFuncionario);
		
		void addOperario(Operario novoOp);
		void addFuncionario(Funcionario novoFuncionario);//Função que adciona funcionarios

		void removeFuncionario(string nameFuncionario);//Função que remove funcionarios
		
		void mostrarQtFuncionarios();//Função que mostra quantidade de funcionarios da empresa
	
		void mostrarFuncionariosLista(); 

		void atualizarDados(Funcionario funcionarioAtt);
		void atualizarDadosOperario(Operario opAtt);

		void aumentarSalario(Funcionario funcionarioAux);
		void aumentarSalarioOperario(Operario opAux);
	};

	

#endif