#include <iostream>
#include <ctime>
#include <cstdlib>
#include "sapo.hpp"

	int sapo::distTotal;
	
	int sapo::getdistTotal(){
		return distTotal;
	}
	int sapo::IncNumPulos(){
		qtPulos++;
		return qtPulos;
	}
	int sapo::numPulos(){
		return qtPulos;
	}
	void sapo::pulo(){
		srand(time(NULL));		
		int d = rand()%(distTotal-1)+1;
		setDistPercorrida(d);
		
	}
	int sapo::getdistInicial(){
		return distInicial;
	}
	void sapo::setDistPercorrida(int d){
		distpercorrida = d;
	}
	int sapo::getDistPercorrida(){
		return distpercorrida;
	}
