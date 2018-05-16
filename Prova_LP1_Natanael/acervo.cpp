#include "acervo.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Acervo::Acervo(){}

void Acervo::setQtLivros(){
    this->qtLivros++;
}
int Acervo::getQtLivros(){
    return this->qtLivros;
}

void Acervo::inserirMidiaLivro(Livro item){
    Produto *temp = &item;
    verificarItem(temp);
}

void Acervo::verAcervo(){
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->getTipo()== "Livro"){
            Livro *t = (Livro*)(this->vetor[i]);
            cout << *t;
        }
    }
}
void Acervo::removerItem(string nome,string tipo){
    int aux;
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->getNome() == nome && this->vetor[i]->getTipo() == tipo){
            aux = i;
            cout << this->vetor[i]->getTipo() << " removido com sucesso!"<<endl;
            this->vetor.erase(vetor.begin()+aux);
            return;
        }
    }
        cout << "Item não está no acervo!"<<endl;
}

void Acervo::verificarItem(Produto *item){
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->getNome() == item->getNome() && this->vetor[i]->getTipo() == item->getTipo()){
            cout <<"O "<< this->vetor[i]->getTipo()<<" "<<this->vetor[i]->getNome() <<" já está no acervo!"<<endl;
            return;
        }
    }
    this->vetor.push_back(item); 
    if(item->getTipo() == "Livro"){
        cout << "Livro adcionado ao acervo!"<<endl;
        setQtLivros();
    }
}

void Acervo::verEstatisticas(){
    cout << "O acervo tem : "<< this->getQtLivros() << " livro(s)!"<<endl;
}