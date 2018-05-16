#include <iostream>
#include <string>
#include "livro.hpp"
using namespace std;

Livro::Livro(){
    setTipoMidia("Livro");
}
Livro::~Livro(){

}

void Livro::setAutor(string autorAux){
    this->autor = autorAux;
}
void Livro::setEditora(string editoraAux){
    this->editora = editoraAux;
}   
void Livro::setISBN(double isbnAux){
    this->isbn = isbnAux;
}

string Livro::getAutor(){
    return this->autor;
}
string Livro::getEditora(){
    return this->editora;
}
double Livro::getISBN(){
    return this->isbn;
}
ostream& operator<< (ostream &o,Livro &l){
    o <<"Tipo: "<<l.getTipo()<< "| Nome : " <<l.getTitulo()<< " | Ano Lancamento : "<<l.getAnoLancamento()<<" | Editora : "<<l.getEditora() <<endl;
	return o;
}