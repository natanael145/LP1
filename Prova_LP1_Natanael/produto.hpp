#include <iostream>
#include <string>
using namespace std;

class Produto
{
protected:
	string nome;
	string titulo;
	string anoLancamento;

public:
	void setNome(string nomeAux);
	void setTitulo(string tituloAux);
	void setAnoLancamento(string anoLancamentoAux);

	string getNome();
	string getTitulo();
	string getAnoLancamento();

	Produto();
	~Produto();
	
};