#ifndef BANCO_H
#define BANCO_H
#include <iostream>
#include "conta.hpp"
class Banco {
    public:
        void criarConta(Conta conta);
        void excluirCota(Conta conta);
        void saque(Conta conta);
        void deposito(Conta conta);
        void verSaldo(Conta conta);
        void verExtrato(Conta conta);
        void transferecia(Conta conta1,Conta conta2);

};


#endif