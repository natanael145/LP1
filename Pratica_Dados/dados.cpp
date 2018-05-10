#include <iostream>
#include <cstdlib>
#include <ctime>
#include "classdado.h"
using namespace std;
//g++ -o dado -Wall -ansi -pedantic -O0 -g dados.cpp classdado.cpp

int main(int argc, const char* argv[]){
	dado d;
	int lancamento;	
	int N = atoi(argv[1]);	
	int *vetor = new int(N);	
	d.lancamento(N,vetor);
	


return 0;
}
