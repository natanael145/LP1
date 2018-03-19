#include <iostream>
#include <cstdlib>
#include <ctime>
#include "sapo.hpp"
using namespace std;

int main(){
	sapo *sapos;
	sapos = new sapo[3];
	sapos->atribuiID(sapos);	
	//cin >> sapo::distTotal;
	sapos->startcorrida(sapos);		
	//sapos->infos(sapos);	
	//sapos->vervencedor(sapos);	
	
return 0;
}
