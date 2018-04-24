using namespace std;
#include <iostream>
template<class T>

class Lista {
	private :
		T *itematual;
		T *itemold;
		T *proximoitem;
		int size;	
	public :
		Lista();
		void inserirElemento(T *elementos,T elemento);
		T retirarElemento(T *elemento);
		T searchElemento(T *elemento);
		T getElementos();
		T mostrarElementos();
		void setSize(int sizeaux);
		int getSize();
};

template<class T>
Lista<T>::Lista(){
	size = 0;
}

template<class T>
T Lista<T>::getElementos(){
	return elementos;
}
template<class T>
void Lista<T>::setSize(int sizeaux){
	sizeaux += size;
}
template<class T>
int Lista<T>::getSize(){
	return size;
}
template<class T>
T Lista<T>::mostrarElementos(){
	for(int i = 0;i<=size;i++){
		cout << "["<<getElementos[i]() << "]";
	}
}
template<class T>
void Lista<T>::inserirElemento(T *elementos,T elemento){
	int sizeaux = 0;	
	sizeaux++;	
		
	for(int i=getSize();i <=getSize();i++){
		elementos[i] = elemento;
	}
	setSize(sizeaux);
}
