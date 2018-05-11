#ifndef SECRETARIA_H
#define SECRETARIA_H
#include<string>
#include "funcionario.hpp"
using namespace std;

class Secretaria : public Funcionario 
{
protected:
    int ramal;
public:
    //CONSTRUTOR E DESTRUTOR
    Secretaria(string nameaux,double salarioaux,int dataADMaux,int ramalaux);
    //SETTERS
    void setRamal(int ramalaux);
    //GETTERS
    int getRamal();
};

#endif