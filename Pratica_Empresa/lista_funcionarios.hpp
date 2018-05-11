#ifndef LISTA_H
#define LISTA_H
	#include <vector>
	using namespace std;
	#include "funcionario.hpp"

	class Lista_Funcionarios
	{
	protected:
		std::vector<Funcionario> vetor;//Nosso vector
	public:
		Lista_Funcionarios();//Construtor padrão
		
		~Lista_Funcionarios();//Destrutor padrão
		
		void addFuncionario(Funcionario novoFuncionario);//Função que adciona funcionarios
		
		void removeFuncionario(string nameFuncionario);//Função que remove funcionarios
		
		void mostrarQtFuncionarios();//Função que mostra quantidade de funcionarios da empresa
	
		void mostrarFuncionariosLista(); 
	};
#endif