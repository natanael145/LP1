#ifndef LIVRO_H
#define LIVRO_H
#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

class Livro : public Produto
{
private:
	string autor;
	string editora;
	double isbn;
	
public:
	void setAutor(string autorAux);
	void setEditora(string editoraAux);
	void setISBN(double isbnAux);

	string getAutor();
	string getEditora();
	double getISBN();
	
	friend ostream& operator << (ostream &o,Livro &l);
	
	Livro();
	~Livro();
	
};
#endif // !LIVRO_H