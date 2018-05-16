#include "interface.hpp"
#include "produto.hpp"
#include "acervo.hpp"
#include "livro.hpp"
#include "cd.hpp"
#include "dvd.hpp"
#include <iostream>
#include <string>
using namespace std;

void interfaceAcervo(){
    Acervo *acervo = new Acervo;
    string tipo1= "Livro";
    string tipo2= "CD";
    string tipo3 = "DVD";
    bool sair = false;
    while(sair == false){
        cout << "------Bem-Vindo ao seu Acervo!!!!------"<<endl;
        cout << "-Para inserir um novo item ao seu acervo digite 1."<<endl;
        cout << "-Para remover um item do seu acervo digite 2."<<endl;
        cout << "-Para ver todos os itens do seu acervo digite 3."<<endl;
        cout << "-Para ver as estatisticas do seu acervo digite 4."<<endl;
        cout << "-Para inserir um novo item ao seu acervo digite 5."<<endl;
        cout << "-Para sair digite 6."<<endl;
        int opcao;
        cin >> opcao;
        if(opcao == 1){
            cout << "Você selecionou a opção de inserir novo item!"<<endl;
            cout << "Agora digite qual tipo de objeto vc deseja inserir!"<<endl;
            cout << "Digite 1 se o objeto for um livro."<<endl;
            cout << "Digite 2 se o objeto for um CD."<<endl;
            cout << "Digite 3 se o objeto for um DVD."<<endl;
            int opcaoInserir;
            cin >> opcaoInserir;
            if(opcaoInserir == 1){
                cin.ignore();
                Livro *livro = new Livro;
                cout << "Informe o titulo do livro:"<<endl;
                string tituloLivro;
                getline(cin,tituloLivro);
                livro->setNome(tituloLivro);
                cout << "Informe o autor do livro:"<<endl;
                string nomeAutor;
                getline(cin,nomeAutor);
                livro->setAutor(nomeAutor);
                cout << "Informe a editora do livro:" <<endl;
                string nomeEditora;
                getline(cin,nomeEditora);
                livro->setEditora(nomeEditora);
                cout << "Informe o ISBN do livro: "<<endl;
                double isbn;
                cin >> isbn;
                livro->setISBN(isbn);
                cout << "Informe o ano de lançamento do livro: "<<endl;
                double anoLancamento;
                cin >> anoLancamento;
                livro->setAnoLancamento(anoLancamento);
                acervo->inserirMidiaLivro(livro);
            }
            else if (opcaoInserir == 2){
                cin.ignore();
                CD *cd = new CD;
                cout << "Informe o nome do CD:"<<endl;
                string nomeCD;
                getline(cin,nomeCD);
                cd->setNome(nomeCD);
                cout << "Informe o compositor do CD:"<<endl;
                string nomeCompositor;
                getline(cin,nomeCompositor);
                cd->setCompositor(nomeCompositor);
                cout << "Informe a quantidade de faixas do CD:" <<endl;
                int qtFaixas;
                cin >> qtFaixas;
                cd->setQtFaixas(qtFaixas);
                cin.ignore();
                cout << "Informe a gravadora do CD: "<<endl;
                string gravadora;
                getline(cin,gravadora);
                cd->setGravadora(gravadora);
                cout << "Informe o ano de lançamento do CD: "<<endl;
                double anoLancamento;
                cin >> anoLancamento;
                cd->setAnoLancamento(anoLancamento);
                acervo->inserirMidiaCD(cd);
           
            }
            else if(opcaoInserir == 3){
                cin.ignore();
                DVD *dvd =new DVD;
                cout << "Informe o titulo do DVD:"<<endl;
                string tituloDVD;
                getline(cin,tituloDVD);
                dvd->setNome(tituloDVD);
                cout << "Informe o diretor do DVD:"<<endl;
                string nomeDiretor;
                getline(cin,nomeDiretor);
                dvd->setDiretor(nomeDiretor);
                cout << "Informe a duraçao do DVD:" <<endl;
                double duracaoDVD;
                cin >> duracaoDVD;
                dvd->setDuracao(duracaoDVD);
                cin.ignore();
                cout << "Informe a classificação do DVD: "<<endl;
                int classificacaoDVD;
                cin >> classificacaoDVD;
                cin.ignore();
                dvd->setClassificacao(classificacaoDVD);
                cout << "Informe o ano de lançamento do CD: "<<endl;
                double anoLancamento;
                cin >> anoLancamento;
                dvd->setAnoLancamento(anoLancamento);
                acervo->inserirMidiaDVD(dvd);
            }
        }
        else if(opcao == 2){
            cout << "Agora digite qual tipo de objeto vc deseja remover!"<<endl;
            cout << "Digite 1 se o objeto for um livro."<<endl;
            cout << "Digite 2 se o objeto for um CD."<<endl;
            cout << "Digite 3 se o objeto for um DVD."<<endl;
            int opcaoRemover;
            cin >> opcaoRemover;
            if(opcaoRemover == 1){
                cin.ignore();
                cout << "Insira nome do livro que quer remover: "<<endl;
                cout << "teste1"<<endl;
                string nomeLivro;
                getline(cin,nomeLivro);
                cout << "teste2"<<endl;
                acervo->removerItem(nomeLivro,tipo1);
                cout << "teste3"<<endl;
            }
            else if(opcaoRemover == 2){
                cin.ignore();
                cout << "Insira nome do CD que quer remover: "<<endl;
                cout << "teste1"<<endl;
                string nomeCD;
                getline(cin,nomeCD);
                cout << "teste2"<<endl;
                acervo->removerItem(nomeCD,tipo2);
                cout << "teste3"<<endl;
            }
            else if(opcaoRemover == 3){
                cin.ignore();
                cout << "Insira nome do DVD que quer remover: "<<endl;
                cout << "teste1"<<endl;
                string nomeDVD;
                getline(cin,nomeDVD);
                cout << "teste2"<<endl;
                acervo->removerItem(nomeDVD,tipo3);
                cout << "teste3"<<endl;
            } 
        }
        else if(opcao == 3){
            cout << "Mostrando itens do acervo..."<<endl;
            acervo->verAcervo();
        }
        else if (opcao == 4){
            acervo->verEstatisticas();
        }

        else if(opcao == 6){
            sair = true;
            cout << "Fechando acervo..."<<endl;
        }   
    }
}