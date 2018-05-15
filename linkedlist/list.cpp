#include<iostream>
#include"list.hpp"
using namespace std;

int Lista::sizeaux = 0;
Lista::Lista(){
    this->tamanho = 0;
    this->primeiroItem = nullptr;
}
void Lista::setTamanhoList(int tamanhoaux){
    this->tamanho = tamanhoaux;
}
int Lista::getTamanhoList(){
    return this->tamanho;
}

void Lista::addElemento(Funcionario *funcionarioAux){
    itemLista *func = new itemLista;
    func->funcionario = funcionarioAux;
    func->prox = nullptr;
    if(this->primeiroItem == nullptr){
        cout << "Primeiro Item!"<<endl;
        this->primeiroItem = func;
        primeiroItem->prox = nullptr;
        primeiroItem->anterior = nullptr;
        sizeaux++;
        setTamanhoList(sizeaux);
        primeiroItem->pos = getTamanhoList();
        cout <<getTamanhoList()<<endl;
    }
    else{
        itemLista *temp = primeiroItem;
        
        while(temp){
            if(temp->prox == nullptr){
                temp->anterior =temp;
                temp->prox = func;
                sizeaux++;
                setTamanhoList(sizeaux);
                temp->pos = getTamanhoList();
                cout <<getTamanhoList() <<endl;
                return;
            }
        temp->anterior = temp;
        temp = temp->prox;    
        }
        
    }
}
void Lista::removeElemento(string nameElemento){
    itemLista *head = this->primeiroItem;
    itemLista *anterior = new itemLista;
    Funcionario *primFunc = this->primeiroItem->funcionario;
    while(head){
        if(nameElemento == primFunc->getName()){
            anterior = 
        }
    } 
   
}
void Lista::mostrarElementos(){
    itemLista *itemTemp = this->primeiroItem;
    Funcionario *funcionarioTemp = itemTemp->funcionario;
    cout <<"Elementos da lista : "<<endl;
    while(itemTemp){
        funcionarioTemp = itemTemp->funcionario;
        cout <<funcionarioTemp->getName() <<endl;
        itemTemp = itemTemp->prox;
    }

}