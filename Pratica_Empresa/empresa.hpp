#ifndef FUNC_H
#define FUNC_H
#include<string>
#include "funcionario.hpp"
using namespace std;
class Empresa 
{
    protected:
        string nameEmpresa;
        string cnpj;
    public:
        //CONSTRUTOR E DESTRUTOR
        Empresa(string nameEmpresaAux,string cpnjAux);
        ~Empresa();
        //SETTERS
        void setNameEmpresa(string nameEmpresaAux);
        void setCNPJ(string cnpjAux);
        //GETTERS
        string getNameEmpresa();
        string getCNPJ();
};

#endif