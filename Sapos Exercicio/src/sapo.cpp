#include <iostream>
#include <ctime>
#include <cstdlib>
#include "../include/sapo.hpp"
using namespace std;
	/**     
	*@brief Operado estático distancia total da corrida definido globalmente
	*/
	int sapo::distTotal=30;
	/**     
	*@brief Construtor
	*@param Este construtor não tem parâmetros
	*/	
	sapo::sapo(){
	}
	/**     
	*@brief Funcão que retorna distância total
	*@param Esta funcão não tem parâmetros
	*/
	int sapo::getdistTotal(){
		return distTotal;
	}
	/**     
	*@brief Funcão que incrementa o número de pulos
	*@param Esta funcão não tem parâmetros
	*/
	void sapo::IncNumPulos(){
		qtPulos++;
	}
	/**     
	*@brief Funcão que retorna o numero de pulos dados
	*@param Esta funcão não tem parâmetros
	*/
	int sapo::getnumPulos(){
		return qtPulos;
	}
	/**     
	*@brief Funcão que começa a corrida
	*@details Atribui o id de cada sapo, chama a função pular enquanto nenhum sapo atingir a distancia e vê o vencedor
	*@param sapos Classe que tem todas os atributos do sapo
	*/
	void sapo::startcorrida(sapo *sapos){		
		atribuiID(sapos);
		pular(sapos);
		vervencedor(sapos);
	}
	/**     
	*@brief Funcão que atribui a distância percorrida
	*@param d É a variável que recebe o valor da distância percorrida para repassar ao atributo privado
	*/
	void sapo::setDistPercorrida(int d){
		distpercorrida = d;
	}
	
	/**     
	*@brief Funcão que retorna a distancia percorrida
	*@param Esta funcão nao recebe parâmetros
	*/
	int sapo::getDistPercorrida(){
		return distpercorrida;
	}
	/**     
	*@brief Funcão que verifica se o valor do pulo é randomico
	*@details A funcão verifica se o valor do pulo de cada sapo é aleatório e se não é igual
	*@param sapos Classe que tem todas os atributos do sapo
	*@param v É o valor do pulo randomico gerado a ser verificado na funcao
	*/
	bool sapo::existe(int v,sapo *sapos){		
		for(int k =0; k<3;k++){					
			for(int i = 0; i<sapo::distTotal;i++){		
				if(sapos[k].valordospulos[i]==v)			
					return true;		
			}			
		}
	return false;	
	}
	/**     
	*@brief Funcão que atribui o id
	*@param numid Variavel usada para receber o identificador do sapo
	*/
	int sapo::setID(int numid){	
		id = numid;
	}
	/**     
	*@brief Funcão que retorna o id
	*@param Esta funcao nao recebe parametros
	*/
	int sapo::getID(){
		return id;
	}
	/**     
	*@brief Funcão que atribui id a cada sapo
	*@param sapos Classe que tem todas os atributos do sapo
	*/
	void sapo::atribuiID(sapo *sapos){
		for(int i = 0;i<3;i++){
			sapos[i].setID(i+1);
		}
	}
	/**     
	*@brief Funcão que imprime as informações do sapo
	*@details A funcão diz a distancia percorrida e a quantidade de pulos de cada sapo
	*@param sapos Classe que tem todas os atributos do sapo	
	*/
	void sapo::infos(sapo *sapos){
		for(int i =0;i<3;i++){				
			cout <<"Sapo " << sapos[i].getID() <<" pulou "<< sapos[i].getnumPulos() <<" vezes e a sua distancia percorrida foi "<<sapos[i].distpercorrida<<endl<<endl;
					
		}
	}
	/**     
	*@brief Funcão que imprime o sapo vencedor 
	*@param Esta funcão nao recebe parâmetros
	*/
	void sapo::printavencedor(){
			cout << "|------------------------------------------------------|"<<endl;
			cout << "|           O vencedor foi o sapo : " << getChegouPrimeiro() <<"                  |"<<endl;
			cout << "|------------------------------------------------------|"<<endl;
	}		
	/**     
	*@brief Funcão que faz a checagem de qual sapo é o vencedor
	*@param sapos Classe que tem todas os atributos do sapo
	*/
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
	/**     
	*@brief Funcão que atribui o sapo que chegou primeiro
	*@param winner Variavel que recebe o id do sapo que chegou primeiro
	*/
	void sapo::setChegouPrimeiro(int winner){
		chegouprimeiro = winner;
	}
	/**     
	*@brief Funcão que retorna o sapo que chegou primeiro
	*@param Esta funcão nao recebe parâmetros
	*/
	int sapo::getChegouPrimeiro(){
		return chegouprimeiro;
	}
	/**     
	*@brief Funcão que faz os sapos pularem
	*@details A funcão gera um valor de distancia randomico para cada sapo pular e enquanto nenhum sapo antigir a distancia total a corrida não acaba
	*@param sapos Classe que tem todas os atributos do sapo
	*/
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
