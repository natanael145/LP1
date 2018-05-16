#include "acervo.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Acervo::Acervo(){}
//CONTROLE DE QUANTIDADE DE ITENS NO ACERVO
void Acervo::setQtLivros(){
    this->qtLivros++;
}
void Acervo::setQtLivros2(){
    this->qtLivros--;
}
int Acervo::getQtLivros(){
    return this->qtLivros;
}
void Acervo::setQtCD(){
    this->qtCD++;
}
void Acervo::setQtCD2(){
    this->qtCD--;
}
int Acervo::getQtCD(){
    return this->qtCD;
}
void Acervo::setQtDVD(){
    this->qtDVD++;
}
void Acervo::setQtDVD2(){
    this->qtDVD--;
}
int Acervo::getQtDVD(){
    return this->qtDVD;
}
//FUNÇÕES PARA INSERIR TODOS TIPOS DE MIDIAS
void Acervo::inserirMidiaLivro(Livro *item){
    Produto *temp = item;
    verificarItem(temp);
}
void Acervo::inserirMidiaCD(CD *item){
    Produto *temp = item;
    verificarItem(temp);
}
void Acervo::inserirMidiaDVD(DVD *item){
    Produto *temp =item;
    verificarItem(temp);
}

//FUNÇÃO QUE MOSTRA TODOS ITENS DO ACERVO
void Acervo::verAcervo(){
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->getTipo()== "Livro"){
            Livro *t = (Livro*)(this->vetor[i]);
            cout << *t;
        }
        else if(this->vetor[i]->getTipo()== "CD"){
            CD *cd = (CD*)(this->vetor[i]);
            cout << *cd;
        }
        else if (this->vetor[i]->getTipo()== "DVD"){
            DVD *dvd = (DVD*)(this->vetor[i]);
            cout << *dvd;
        }
    }
}
//FUNÇÃO QUE REMOVE ITEM DO ACERVO PELO NOME  E TIPO
void Acervo::removerItem(string nome,string tipo){
    int aux;
    for(int i = 0; i<(int)this->vetor.size();i++){
        if(this->vetor[i]->getNome() == nome && this->vetor[i]->getTipo() == tipo){
            aux = i;
            cout << this->vetor[i]->getTipo() << " removido com sucesso!"<<endl;
            this->vetor.erase(vetor.begin()+aux);
            if(tipo == "Livro"){
                cout << "Livro removido do acervo!"<<endl;
                setQtLivros2();
            }
            else if (tipo == "CD"){
                cout << "CD removido do acervo!"<<endl;
                setQtCD2();
            }
            else if(tipo == "DVD"){
                cout << "DVD removido do acervo!"<<endl;
                setQtDVD2();
            }
            return;
        }
    }
        cout << "Item não está no acervo!"<<endl;
}
//FUNÇÃO QUE FAZ VERIFICACAO E INSERÇÃO DE ITENS 
void Acervo::verificarItem(Produto *item){
    for(int i = 0; i<(int)this->vetor.size();i++){
        cout << "Nome : " <<this->vetor[i]->getNome() << "|||| Tipo: "<<this->vetor[i]->getTipo() <<endl;
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
    else if (item->getTipo() == "CD"){
        cout << "CD adcionado ao acervo!"<<endl;
        setQtCD();
    }
    else if (item->getTipo() == "DVD"){
        cout << "DVD adcionado ao acervo!"<<endl;
        setQtDVD();
    }
}
//ESTATISTICAS DO ACERVO
void Acervo::verEstatisticas(){
    cout << "O acervo tem : "<< this->getQtLivros() << " livro(s)!"<<endl;
    cout << "O acervo tem : "<< this->getQtCD() << " CD(s)!"<<endl;
    cout << "O acervo tem : "<< this->getQtDVD() << " DVD(s)!"<<endl;
}