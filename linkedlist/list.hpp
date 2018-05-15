#include<iostream>
#include "funcionario.hpp"
using namespace std;
struct itemLista
{
    int pos;
    Funcionario *funcionario;
    itemLista *prox;
    itemLista *anterior;
};

class Lista
{
private:
    itemLista *primeiroItem;
    int tamanho;
public:
    Lista();
    static int sizeaux ;
    void setTamanhoList(int tamanhoaux);
    int getTamanhoList();
    void setPrimeiroItem(itemLista *PrimeiroItem);
    void setTamanho(int tamaux);
    void addElemento(Funcionario *funcionarioAux);
    void removeElemento(string nameElemento);
    void mostrarElementos();
};