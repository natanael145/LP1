#ifndef CONTA_H
#define CONTA_H
#include <random>
#include <iostream>
using namespace std;
class Conta {
    private:
        int num,status,limite;
        double saldo=0; 
        int cpf;    
    public:
        static int random_device rd;
		static int mt19937 gen;
		static int uniform_int_distribution<> dis;
        static int agencia;
        int getCPF();
        Conta();
        Conta(int numerocpf);
        int getAgencia();
        void setNum(int n);
        void geranumconta();
        int getNum();
        void setStatus(int s);
        int getStatus();
        void setLim(int l);
        int getLim();
        void setSaldo(int sald);
        int getSaldo();
       
};


#endif