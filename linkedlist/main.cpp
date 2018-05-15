#include<iostream>
#include "funcionario.hpp"
#include "vector.hpp"
#include "operario.hpp"
using namespace std;
int main(){
    Funcionario *eu = new Funcionario;
    Operario *tu = new Operario("Natan",1000,300,"GAB");
    Funcionario *a = new Funcionario;
    Lista_Funcionarios *novalista = new Lista_Funcionarios;
    eu->setName("Natan");
    void* ptr = eu;
    void* ptr2 = tu;
    novalista->addFuncionario(ptr);
    novalista->addFuncionario(ptr2);
    novalista->mostrarFuncionariosLista();
    
}