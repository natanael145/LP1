#ifndef CD_H
#define CD_H
#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

class CD : public Produto
{
private:
	string compositor;
	int qtFaixas;
	string gravadora;

public:
	void setCompositor(string compositorAux);
	void setQtFaixas(int qtFaixasAux);
	void setGravadora(string gravadoraAux);

	string getCompositor();
	int getQtFaixas();
	string getGravadora();

	friend ostream& operator << (ostream &o,CD &cd);

	CD();
	~CD();
};
#endif