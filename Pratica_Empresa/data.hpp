#ifndef DATA_H
#define DATA_H
class Data
{
private:
	int dia;
	int mes;
	int ano;
	int diasTotais;
public:
	Data(int dia,int mes,int ano);
	~Data();
	int getDiasTotais();
};

#endif