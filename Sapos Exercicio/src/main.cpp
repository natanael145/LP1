/**
*@file main.cpp
*@brief Corrida de sapos
*@author Natanael Fernandes T. Araujo
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "../include/sapo.hpp"
#include "../include/cabecalho.hpp"
#include "../include/corrida.hpp"
using namespace std;
//g++ -o corrida -Wall -ansi -pedantic -O0 -g main.cpp sapo.cpp cabecalho.cpp

int main(){
	sapo *sapos=new sapo[3]{(1),(2),(3)};
	corrida corrida;
	cabecalho();
	corrida.ccorrida(sapos);
	
return 0;
}
