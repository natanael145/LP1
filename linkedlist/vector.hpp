#ifndef LISTA_H
#define LISTA_H
	#include <vector>
	using namespace std;
	#include "funcionario.hpp"
	#include "operario.hpp"
	
	class Lista_Funcionarios
	{
	protected:
		std::vector<void*> vetor;//Nosso vector
	public:
		Lista_Funcionarios();//Construtor padrão
		
		~Lista_Funcionarios();//Destrutor padrão
        void addFuncionario(void* ptr);
        void mostrarFuncionariosLista();
       
    };
#endif