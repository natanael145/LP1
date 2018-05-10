#include "classdado.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int dado::getlado1(){
	return lado1;	
}

int dado::getlado2(){
	return lado2;	
}
int dado::getlado3(){
	return lado3;	
}
int dado::getlado4(){
	return lado4;	
}
int dado::getlado5(){
	return lado5;	
}
int dado::getlado6(){
	return lado6;	
}
void dado::lancamento(int N,int *vetor){
	srand(time(NULL));	
	for(int i = 0;i <N; i++){	
		vetor[i]=rand()%(lado6-lado1+1)+lado1;
		cout << "No lançamento " << i+1 <<" o dado caiu no lado do valor : " << vetor[i] <<"  " <<endl;
	}
}
