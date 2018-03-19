#include <iostream>
#include <ctime>
#include <cstdlib>
#include "sapo.hpp"
using namespace std;
	
	int sapo::distTotal=30;
	
	
	
	int sapo::getdistTotal(){
		return distTotal;
	}
	void sapo::IncNumPulos(){
		qtPulos++;
	}
	int sapo::getnumPulos(){
		return qtPulos;
	}
	void sapo::startcorrida(sapo *sapos){
		int k = 0,v,i;		
		while(sapos[0].distpercorrida<=sapo::distTotal && sapos[1].distpercorrida<=sapo::distTotal && sapos[2].distpercorrida<=sapo::distTotal){			
			for(i = 0;i<3;i++){					
				if(sapos[i].distpercorrida>=sapo::distTotal){
					cout<< "O sapo : " << sapos[i].getID()<<" atingiu o ponto de chegada!"      				<<endl;					
					int vencedor = sapos[i].getID();
					printavencedor(vencedor);
					}			
				else {				
					srand(time(NULL));		
					v = rand()%(sapo::distTotal/2);
					while(existe(v,sapos)){
						v = rand()%(sapo::distTotal/2);		
					}					
					sapos[i].valordospulos[k] = v;
					sapos[i].distpercorrida += sapos[i].valordospulos[k];			
					sapos[i].IncNumPulos();				
					cout <<"Sapo "<<i+1<<" pulou : " << sapos[i].valordospulos[k] << endl;
					k++;	
				}			
						
		
			}		
		}	
	infos(sapos);
	vervencedor(sapos);
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
	bool sapo::existe(int v,sapo *sapos){		
		for(int k =0; k<3;k++){					
			for(int i = 0; i<sapo::distTotal;i++){		
				if(sapos[k].valordospulos[i]==v)			
					return true;		
			}			
		}
	return false;	
	}
	int sapo::setID(int numid){	
		id = numid;
	}
	int sapo::getID(){
		return id;
	}
	void sapo::atribuiID(sapo *sapos){
		for(int i = 0;i<3;i++){
			sapos[i].setID(i+1);
		}
	}
	
	void sapo::infos(sapo *sapos){
		for(int i =0;i<3;i++){				
			cout <<"Distancia percorrida pelo sapo " << sapos[i].getID() <<" : "<< sapos[i].distpercorrida<<endl;
			cout << "Sapo : "<< sapos[i].getID() << " pulou : " << sapos[i].getnumPulos()<<" vezes."<<endl;		
		}
	}
	void sapo::printavencedor(int vencedor_){
		cout << "O vencedor foi o sapo : " << vencedor_ <<endl;
	}		
	void sapo::vervencedor(sapo *sapos){
		int maior = sapos[0].distpercorrida;
		int vencedor;
		for(int i = 1 ; i<3; i++){
			if(sapos[i].distpercorrida > maior){
				maior = sapos[i].distpercorrida;
				vencedor = sapos[i].getID();		
			}
		}				
		printavencedor(vencedor);	
	}
	
