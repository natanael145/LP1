#ifndef ACERVO_H
#define ACERVO_H
#include "produto.hpp"
#include "livro.hpp"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Acervo
{
protected:
    std::vector<Produto*> vetor;
    int qtCD;
    int qtLivros;
    int qtDVD;
public:
    Acervo();
    ~Acervo();
    void setQtLivros();
    int getQtLivros();
    void inserirMidiaLivro(Livro item);
    void verAcervo();
    void removerItem(string nome,string tipo);
    void verEstatisticas();
    void editarItem();
    void verificarItem(Produto *item);
};



#endif