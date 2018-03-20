#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sapo.hpp"
#include "cabecalho.hpp"
using namespace std;
//g++ -o corrida -Wall -ansi -pedantic -O0 -g main.cpp sapo.cpp cabecalho.cpp

int main(){
	sapo *sapos;
	sapos = new sapo[3];
	cabecalho();
	sapos->startcorrida(sapos);			
return 0;
}
