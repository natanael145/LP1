#include <iostream>
#include <string>
#include "../include/livro.hpp"
#include "../include/produto_duravel.hpp"
using namespace std;

//SETTERS

void Livro::setNome(string nomeaux){
    this->nome = nomeaux;
}

void Livro::setPaginas(string paginasaux){
    this->qtpaginas = paginasaux;
}

//GETTERS

string Livro::getNome(){
    return this->nome;
}

string Livro::getPaginas(){
    return this->qtpaginas;
}