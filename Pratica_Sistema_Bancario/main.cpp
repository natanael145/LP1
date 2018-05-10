#include <iostream>
#include "banco.hpp"
#include "conta.hpp"
using namespace std;

int main(){
    int cpftemp;
    Banco banco;
    cout << "Bem-Vindo ao sistema bancário Branesco!" << endl;
    cout << "Você ainda não tem uma conta,vamos criar sua conta!" << endl;
    cout << "Digite seu CPF para começar!" << endl;
    cin >> cpftemp ;
    Conta conta(cpftemp);
    




}