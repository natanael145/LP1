#ifndef DEPOSITO_H
#define DEPOSITO_H
	#include <vector>
	using namespace std;
	#include "produto.hpp"

	class Deposito
	{
	protected:
		std::vector<Produto> vetor;
	public:
		Deposito();
		~Deposito();
		void addProduto(Produto add);
		void remProduto(string nome_produto);
		void qtdProdutos();
		void depVazio();
		//void listProduto();
	};
#endif