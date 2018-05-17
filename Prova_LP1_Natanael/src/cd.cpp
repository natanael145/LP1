#include <iostream>
#include <string>
#include "../include/cd.hpp"
using namespace std;

CD::CD()
{
    setTipoMidia("CD");
}
CD::~CD()
{
}
void CD::setCompositor(string compositorAux)
{
    this->compositor = compositorAux;
}
void CD::setGravadora(string gravadoraAux)
{
    this->gravadora = gravadoraAux;
}
void CD::setQtFaixas(int qtFaixasAux)
{
    this->qtFaixas = qtFaixasAux;
}

string CD::getCompositor()
{
    return this->compositor;
}
string CD::getGravadora()
{
    return this->gravadora;
}
int CD::getQtFaixas()
{
    return this->qtFaixas;
}

ostream &operator<<(ostream &o, CD &cd)
{
    o << "Tipo: " << cd.getTipo() << "| Nome : " << cd.getNome() << " | Ano Lancamento : " << cd.getAnoLancamento() << " | Compositor : " << cd.getCompositor() << " | Quantidade de faixas : " << cd.getQtFaixas() << " | Gravadora : " << cd.getGravadora() << endl;
    return o;
}