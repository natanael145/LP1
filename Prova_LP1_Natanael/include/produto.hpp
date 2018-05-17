#ifndef PRODUTO_H
#define PRODUTO_H
#include <iostream>
#include <string>
using namespace std;

class Produto
{
protected:
	string nome;
	string titulo;
	double anoLancamento;
	string tipoMidia;
	
public:
	void setNome(string nomeAux);
	void setTitulo(string tituloAux);
	void setAnoLancamento(double anoLancamentoAux);
	void setTipoMidia(string tipoAux);	

	string getNome();
	string getTitulo();
	double getAnoLancamento();
	string getTipo();
	
	friend ostream& operator << (ostream &o,Produto &p);

};
#endif // !PRODUTO_H