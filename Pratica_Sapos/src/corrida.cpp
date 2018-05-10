#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../include/sapo.hpp"
#include "../include/corrida.hpp"
using namespace std;

void corrida::ccorrida(sapo *sapos){
    while(sapos[0].getDistPercorrida()<=sapo::distTotal && sapos[1].getDistPercorrida()<=sapo::distTotal && sapos[2].getDistPercorrida()<=sapo::distTotal){
        sapos->pular(sapos);
    }
    vervencedor(sapos);
}
/**     
*@brief Funcão que faz a checagem de qual sapo é o vencedor
*@param sapos Classe que tem todas os atributos do sapo
*/
void corrida::vervencedor(sapo *sapos){
	for(int i = 0 ; i<3; i++){
		if(sapos[i].getDistPercorrida()>=sapo::distTotal){
			cout<< "O sapo	 " << sapos[i].getID()<<" atingiu o ponto de chegada primeiro!" <<endl<<endl;	
			int vencedor = sapos[i].getID();
			setChegouPrimeiro(vencedor);
			sapos->infos(sapos);
			printavencedor();					
			break;			
		}		
	}				
}
/**     
*@brief Funcão que imprime o sapo vencedor 
*@param Esta funcão nao recebe parâmetros
*/
void corrida::printavencedor(){
	cout << "|------------------------------------------------------|"<<endl;
	cout << "|           O vencedor foi o sapo : " << getChegouPrimeiro() <<"                  |"<<endl;
	cout << "|------------------------------------------------------|"<<endl;
}		
/**     
*@brief Funcão que atribui o sapo que chegou primeiro
*@param winner Variavel que recebe o id do sapo que chegou primeiro
*/
void corrida::setChegouPrimeiro(int winner){
	chegouprimeiro = winner;
}
/**     
*@brief Funcão que retorna o sapo que chegou primeiro
*@param Esta funcão nao recebe parâmetros
*/
int corrida::getChegouPrimeiro(){
	return chegouprimeiro;
}