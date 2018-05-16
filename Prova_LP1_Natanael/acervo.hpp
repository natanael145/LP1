#ifndef ACERVO_H
#define ACERVO_H
#include "produto.hpp"
#include "livro.hpp"
#include "cd.hpp"
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
    void setQtLivros2();
    int getQtLivros();
    void setQtCD();
    void setQtCD2();
    int getQtCD();
    void inserirMidiaLivro(Livro item);
    void inserirMidiaCD(CD item);
    void verAcervo();
    void removerItem(string nome,string tipo);
    void verEstatisticas();
    void editarItem();
    void verificarItem(Produto *item);
};



#endif