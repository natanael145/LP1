#ifndef DVD_H
#define DVD_H
#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

class DVD : public Produto
{
  private:
	string diretor;
	double duracao;
	int classificacao;

  public:
	void setDiretor(string diretorAux);
	void setDuracao(double duracaoAux);
	void setClassificacao(int classificacaoAux);

	string getDiretor();
	double getDuracao();
	int getClassificacao();

	friend ostream &operator<<(ostream &o, DVD &dvd);

	DVD();
	~DVD();
};
#endif // !DVD_H