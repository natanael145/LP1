#include<iostream>
#include "list.cpp"
#include "item_list.hpp"
using namespace std;

int main(){
    bool out=false, auxprim=true;
    Lista<int> *nova_lista = new Lista<int>();
    item_list<int> *primeiroitem = new item_list<int>;
    
    while(out == false){
        cout << "-----Instruções-----"<<endl<< "Digite 1 para inserir elemento."<<endl<<"Digite 2 para mostrar os elementos da lista."<<endl<<"Digite 3 para ver quantos elementos tem na lista."<<endl<<"Digite 4 para sair."<<endl;
        int acao;
        cin >> acao;
        if(acao == 1){
            if(auxprim == true){
                cout << "Digite o primeiro elemento a ser inserido na lista!"<<endl;
                int element;
                cin >> element;
                nova_lista->inserirPrimeiroElemento(element,primeiroitem);
                auxprim = false;
            }
            else{
                cout << "Digite o elemento a ser inserido na lista!"<<endl;
                int element;
                cin >> element;
                nova_lista->inserirElemento(element,primeiroitem);
            }
        }
        else if(acao == 2){
            if(auxprim==true){
                cout << "A lista ainda não tem elementos!"<<endl;
            }
            else
                nova_lista->mostrarElementos(primeiroitem);
        }
        else if(acao == 3){
             nova_lista->mostrarTamanho();
        }
        else if(acao == 4){
            out = true;
            cout << "Encerrando..."<<endl;
        }
        
    }
return 0;
}
