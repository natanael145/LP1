#ifndef OP_H
#define OP_H
#include<string>
#include"funcionario.hpp"
using namespace std;

class Operario : public Funcionario
{
protected:
	string NameFab;
	
public:
	//CONSTRUTOR E DESTRUTOR
	Operario(string nameaux,double salarioaux,int dataADMaux,string nameFabAux);
	//SETTERS
	void setNameFab(string NameFabAux);
	//GETTERS
	string getNameFab();
};

#endif 