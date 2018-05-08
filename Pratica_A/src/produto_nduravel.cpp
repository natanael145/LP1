#include <iostream>
#include <string>
#include "../include/produto.hpp"
#include "../include/produto_nduravel.hpp"
using namespace std;

//SETTERS
void Produto_NaoDuravel::setExp_Date(string date_exp_aux){
    this->exp_date = date_exp_aux;
}

void Produto_NaoDuravel::setGen(string genaux){
    this->gen = genaux;
}   

//GETTERS 

string Produto_NaoDuravel::getExp_Date(){
    return this->exp_date;
}

string Produto_NaoDuravel::getGen(){
    return this->gen;
}