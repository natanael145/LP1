#ifndef DEPOSITO_H
#define DEPOSITO_H
	#include <vector>
	using namespace std;
	#include "../include/produto.hpp"

	class Deposito
	{
	protected:
		std::vector<Produto> vetor;//Nosso vector
	public:
		Deposito();//Construtor padrão
		
		~Deposito();//Destrutor padrão
		
		void addProduto(Produto item);//Função que adciona produtos
		
		void removeProduto(string nameSearch);//Função que remove produtos
		
		void qtProdutos();//Função que mostra quantidade de produtos
		
		void MostrarProdutoMaisCaro();//Função que mostra o produto mais caro do depósito
	
		//void MostrarItensDep(); Função ainda não implementada!
	};
#endif