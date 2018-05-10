#ifndef FUNC_H
#define FUNC_H
#include<string>
#include "data.hpp"
using namespace std;

class Funcionario
{
protected:
	string name;
	double salario;
	int dataADM;

public:
	//CONSTRUTOR E DESTRUTOR
	Funcionario(string nameaux,double salarioaux,string dataADMaux);
	~Funcionario();
	//SETTERS
	void setName(string nameaux);
	void setSalario(double salarioaux);
	void setDataADM(string dataADMaux);
	//GETTERS
	string getName();
	double getSalario();
	string getDataADM();

	
};

#endif