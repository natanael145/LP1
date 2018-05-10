#include <iostream>
#include <random>
#include "conta.hpp"
#include "banco.hpp"
using namespace std;

random_device Conta::rd{};
mt19937 Conta::gen(Conta::rd());
uniform_int_distribution<> Conta::dis(1,6);

int Conta::agencia = 1000;

Conta::Conta(int numerocpf){
    cpf = numerocpf;
}

void Conta::geranumconta(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1,6);
}

