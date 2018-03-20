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
		atribuiID(sapos);
		pular(sapos);
		vervencedor(sapos);
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
			cout <<"Sapo " << sapos[i].getID() <<" pulou "<< sapos[i].getnumPulos() <<" vezes e a sua distancia percorrida foi "<<sapos[i].distpercorrida<<endl<<endl;
					
		}
	}
	void sapo::printavencedor(){
			cout << "|------------------------------------------------------|"<<endl;
			cout << "|           O vencedor foi o sapo : " << getChegouPrimeiro() <<"                  |"<<endl;
			cout << "|------------------------------------------------------|"<<endl;
	}		
	void sapo::vervencedor(sapo *sapos){
		for(int i = 0 ; i<3; i++){
			if(sapos[i].distpercorrida>=sapo::distTotal){
				cout<< "O sapo	 " << sapos[i].getID()<<" atingiu o ponto de chegada primeiro!" <<endl<<endl;	
				int vencedor = sapos[i].getID();
				setChegouPrimeiro(vencedor);
				infos(sapos);
				printavencedor();					
				break;			
			}		
		}				
	}
	void sapo::setChegouPrimeiro(int winner){
		chegouprimeiro = winner;
	}
	int sapo::getChegouPrimeiro(){
		return chegouprimeiro;
	}
	void sapo::pular(sapo *sapos){
		int i,k=0,v;
		while(sapos[0].distpercorrida<=sapo::distTotal && sapos[1].distpercorrida<=sapo::distTotal && sapos[2].distpercorrida<=sapo::distTotal){
			for(i = 0;i<3;i++){					
				srand(time(NULL));		
				v = rand()%sapo::distTotal/3;
				while(existe(v,sapos)){
					v = rand()%sapo::distTotal/2;		
				}					
				sapos[i].valordospulos[k] = v;
				sapos[i].distpercorrida += sapos[i].valordospulos[k];	
				sapos[i].IncNumPulos();				
				cout <<"Sapo "<<sapos[i].getID()<<" pulou : " << sapos[i].valordospulos[k] << endl;				
				k++;	
			}
		cout << "-------------------------------------------------"<<endl;
		}	
	}
