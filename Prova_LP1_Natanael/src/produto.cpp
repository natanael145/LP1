#include <iostream>
#include <string>
#include "../include/produto.hpp"
using namespace std;

void Produto::setNome(string nomeAux){
    this->nome = nomeAux;
}

void Produto::setTitulo(string tituloAux){
    this->titulo = tituloAux;
}

void Produto::setAnoLancamento(double anoLancamentoAux){
    this->anoLancamento = anoLancamentoAux;
}
void Produto::setTipoMidia(string tipoAux){
    this->tipoMidia = tipoAux;
}
string Produto::getNome(){
    return this->nome;
}

string Produto::getTitulo(){
    return this->titulo;
}

double Produto::getAnoLancamento(){
    return this->anoLancamento;
}
string Produto::getTipo(){
    return this->tipoMidia;
}
ostream& operator<< (ostream &o,Produto &p){
	o << "Nome : " <<p.getNome()<< "| Ano Lancamento : "<<p.getAnoLancamento()<<endl;
	return o;
}