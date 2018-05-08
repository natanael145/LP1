#include <iostream>
#include <string>
#include "../include/produto.hpp"
#include "../include/produto_duravel.hpp"
#include "../include/produto_nduravel.hpp"
#include "../include/pizza.hpp"
#include "../include/refrigerante.hpp"
#include "../include/chocolate.hpp"
#include "../include/carro.hpp"
#include "../include/livro.hpp"
#include "../include/celular.hpp"
#include "../include/deposito.hpp"


using namespace std;
//g++ -o pratice -Wall -ansi -pedantic -O0 -g main.cpp produto.cpp produto_duravel.cpp produto_nduravel.cpp pizza.cpp refrigerante.cpp chocolate.cpp carro.cpp livro.cpp celular.cpp -std=c++11

int main(){
    Deposito deposito;
    
    Carro c("Ferrari","Carro Rápido","08/05/2018","2018","500",500000000,"Ferrari","Aço","10anos");
    Pizza calabresa;
    
    deposito.addProduto(c);
    deposito.addProduto(calabresa);
    deposito.MostrarProdutoMaisCaro();
    
    return 0;
}