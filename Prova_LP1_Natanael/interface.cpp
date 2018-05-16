#include "interface.hpp"
#include "produto.hpp"
#include "acervo.hpp"
#include "livro.hpp"
#include <iostream>
#include <string>
using namespace std;

void interfaceAcervo(){
    Acervo *acervo = new Acervo;
    string tipo1= "Livro";
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
                Livro livro;
                cout << "Informe o titulo do livro:"<<endl;
                string tituloLivro;
                getline(cin,tituloLivro);
                livro.setTitulo(tituloLivro);
                cout << "Informe o autor do livro:"<<endl;
                string nomeAutor;
                getline(cin,nomeAutor);
                livro.setAutor(nomeAutor);
                cout << "Informe a editora do livro:" <<endl;
                string nomeEditora;
                getline(cin,nomeEditora);
                livro.setEditora(nomeEditora);
                cout << "Informe o ISBN do livro: "<<endl;
                double isbn;
                cin >> isbn;
                livro.setISBN(isbn);
                cout << "Informe o ano de lançamento do livro: "<<endl;
                double anoLancamento;
                cin >> anoLancamento;
                livro.setAnoLancamento(anoLancamento);
                acervo->inserirMidiaLivro(livro);
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