using namespace std;
#include <iostream>
#include "item_list.hpp"

template<class T>		
class Lista {
	private :
		T *itematual;
		int size;	
	public :
		static int sizeaux ;
		Lista();
		void inserirElemento(T valorelemento, struct item_list<T> *primeiralista);
		void inserirPrimeiroElemento(T valorelemento,struct item_list<T> *primeiralista);
		T retirarElemento(T *elemento);
		T searchElemento(T *elemento);
		void setAtual(T valor);
		T getAtual();
		void mostrarElementos(struct item_list<T> *primeiralista);
		void setSize(int sizeaux);
		int getSize();
		void mostrarTamanho();
};
template<class T>
int Lista<T>::sizeaux = 0;

template<class T>
Lista<T>::Lista(){
	size = 0;
}
template<class T>
T Lista<T>::getAtual(){
	return *itematual;
}
template<class T>
void Lista<T>::setAtual(T valor){
	itematual = &valor;
}
template<class T>
void Lista<T>::setSize(int sizeaux){
	size = sizeaux;
}
template<class T>
int Lista<T>::getSize(){
	return size;
}
//FUNÇÃO QUE MOSTRA TODOS OS ITENS DA LISTA
template<class T>
void Lista<T>::mostrarElementos(struct item_list<T> *primeiralista){
	item_list<T> *listaprint = primeiralista;
	cout << "Elementos da lista : [";
	while(listaprint){
		cout << listaprint->value<<"," ;
		listaprint = listaprint->proxItem;
	}
	cout << "]"<<endl;
}
//FUNÇÂO QUE PEGA O PRIMEIRO ELEMENTO DA LISTA APÓS CRIADA
template<class T>
void Lista<T>::inserirPrimeiroElemento(T valorelemento,struct item_list<T> *primeiralista){
	cout << "Primeiro elemento da lista!"<< endl;
	primeiralista->value = valorelemento;
	primeiralista->itemAnterior = NULL;
	primeiralista->proxItem = NULL;
	setAtual(valorelemento); 
	cout<< getAtual() <<endl;
	sizeaux++;
	setSize(sizeaux);
}
//FUNÇÃO QUE PEGA OS DEMAIS ITENS DA LISTA
template<class T>
void Lista<T>::inserirElemento(T valorelemento,struct item_list<T> *primeiralista){
	item_list<T> *novalista = new item_list<T>;
	novalista->value = valorelemento;
	novalista->proxItem = NULL;
	item_list<T> *listAtual= primeiralista;
	while(listAtual){
		if(listAtual->proxItem == NULL){
			listAtual->proxItem = novalista;
			setAtual(valorelemento);
			sizeaux++;
			cout<<"asdas"<<endl;
			setSize(sizeaux);
			return;
		}
		listAtual = listAtual->proxItem;
	}
	
}
template<class T>
void Lista<T>::mostrarTamanho(){
	cout << "A lista tem : "<< getSize() << " elementos!"<<endl;
}
