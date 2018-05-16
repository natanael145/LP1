#include <iostream>
#include <string>
#include "dvd.hpp"
using namespace std;

DVD::DVD(){
    setTipoMidia("DVD");
}
DVD::~DVD(){
    
}

void DVD::setDiretor(string diretorAux){
    this->diretor = diretorAux;
}
void DVD::setDuracao(double duracaoAux){
    this->duracao = duracaoAux;
}   
void DVD::setClassificacao(int classificacaoAux){
    this->classificacao = classificacaoAux;
}

string DVD::getDiretor(){
    return this->diretor;
}
double DVD::getDuracao(){
    return this->duracao;
}
int DVD::getClassificacao(){
    return this->classificacao;
}
ostream& operator<< (ostream &o,DVD &dvd){
    o <<"Tipo: "<<dvd.getTipo()<< "| Titulo : " <<dvd.getNome()<< " | Ano Lancamento : "<<dvd.getAnoLancamento()<<" | Diretor : "<<dvd.getDiretor() <<" | Duração : "<<dvd.getDuracao()<<" | Classificação : "<<dvd.getClassificacao()<<endl;                                         
	return o;
}