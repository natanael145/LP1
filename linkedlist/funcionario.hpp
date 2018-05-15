#ifndef FUNC_H
#define FUNC_H
#include<string>
using namespace std;

class Funcionario
{
protected:
	string name;
	double salario;
	int dataADM;
	string status;
public:
	//Funcionario();
	friend ostream& operator << (ostream &o,Funcionario &func);
	string getStatus();
	void setStatus(string statusAux);
	//SETTERS
	void setName(string nameaux);
	void setSalario(double salarioaux);
	void setDataADM(int dataADMaux);
	//GETTERS
	string getName();
	double getSalario();
	int getDataADM();

	
};

#endif