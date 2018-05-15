#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

class DVD : public Produto
{
private:
	string diretor;
	string duracao;
	int classificacao;

public:
	void setDiretor(string diretorAux);
	void setDuracao(string duracaoAux);
	void setClassificacao(string classificacaoAux);

	string getDiretor();
	string getDuracao();
	int getClassificacao();


	DVD();
	~DVD();
	
};