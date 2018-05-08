#include <iostream>
#include <string>
#include "produto.hpp"
#include "produto_duravel.hpp"
#include "produto_nduravel.hpp"
#include "pizza.hpp"
#include "refrigerante.hpp"
#include "chocolate.hpp"
#include "carro.hpp"
#include "livro.hpp"
#include "celular.hpp"

using namespace std;
//g++ -o pratice -Wall -ansi -pedantic -O0 -g main.cpp produto.cpp produto_duravel.cpp produto_nduravel.cpp pizza.cpp refrigerante.cpp chocolate.cpp carro.cpp livro.cpp celular.cpp -std=c++11

int main(){
    Carro c("Ferrari","Carri Rápido","08/05/2018","2018","500",500000000,"Ferrari","Aço","10anos");
    
    
    return 0;
}