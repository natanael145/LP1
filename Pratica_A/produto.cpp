#include <iostream>
#include <string>
#include "produto.hpp"
using namespace std;

//SETTERS
void Produto::setName(string nameaux){
    this->name = nameaux;
}

void Produto::setPrice(double priceaux){
    this->price = priceaux;
}

void Produto::setTrademark(string trademarkaux){
    this->trademark = trademarkaux;
}

void Produto::setDescription(string descriptionaux){
    this->description = descriptionaux;
}

void Produto::setFab_Date(string dateaux){
    this->fab_date = dateaux;
}

//GETTERS

string Produto::getName(){
    return this->name;
}

double Produto::getPrice(){
    return this->price;
}

string Produto::getTrademark(){
    return this->trademark;
}

string Produto::getDescription(){
    return this->description;
}

string Produto::getFab_Date(){
    return this->fab_date;
}