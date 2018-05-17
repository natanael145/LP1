#include "../include/interface.hpp"
#include "../include/produto.hpp"
#include "../include/acervo.hpp"
#include "../include/livro.hpp"
#include "../include/cd.hpp"
#include "../include/dvd.hpp"
#include <iostream>
#include <string>
using namespace std;

void interfaceAcervo()
{
    //Itens padrão deste acervo
    Livro *l = new Livro;
    Livro *b = new Livro;
    l->setNome("Livro 1");
    b->setNome("Livro 2");
    l->setAutor("Joao");
    b->setAutor("Jose");
    l->setEditora("Desqxele");
    b->setEditora("Xesquedele");
    l->setISBN(1);
    b->setISBN(2);
    l->setAnoLancamento(2018);
    b->setAnoLancamento(2018);
    
    CD *c = new CD;
    CD *d = new CD;
    c->setNome("CD 1");
    d->setNome("CD 2");
    c->setCompositor("Joaozinho");
    d->setCompositor("Jared");
    c->setAnoLancamento(2018);
    d->setAnoLancamento(2018);
    c->setQtFaixas(5);
    d->setQtFaixas(6);
    c->setGravadora("Geral Records");
    d->setGravadora("Geral Records");
    
    DVD *v = new DVD;
    DVD *a = new DVD;
    v->setNome("TA MEC");
    a->setNome("SEHLOIRO");
    v->setDiretor("Jukera");
    a->setDiretor("Yodao");
    v->setDuracao(2.5);
    a->setDuracao(2);
    v->setClassificacao(18);
    a->setClassificacao(18);
    v->setAnoLancamento(2018);
    a->setAnoLancamento(2018);
    
    //Começo da interface de escolhas
    Acervo *acervo = new Acervo;
    acervo->inserirMidiaLivro(l);
    acervo->inserirMidiaLivro(b);
    acervo->inserirMidiaCD(c);
    acervo->inserirMidiaCD(d);
    acervo->inserirMidiaDVD(v);
    acervo->inserirMidiaDVD(a);
    
    string tipo1 = "Livro";
    string tipo2 = "CD";
    string tipo3 = "DVD";
    bool sair = false;
    while (sair == false)
    {
        cout << "------Bem-Vindo ao seu Acervo!!!!------" << endl;
        cout << "-Para inserir um novo item ao seu acervo digite 1." << endl;
        cout << "-Para remover um item do seu acervo digite 2." << endl;
        cout << "-Para ver todos os itens do seu acervo digite 3." << endl;
        cout << "-Para ver as estatisticas do seu acervo digite 4." << endl;
        cout << "-Para editar um item do seu acervo digite 5." << endl;
        cout << "-Para sair digite 6." << endl;
        int opcao;
        cin >> opcao;
        if (opcao == 1)
        {
            cout << "Você selecionou a opção de inserir novo item!" << endl;
            cout << "Agora digite qual tipo de objeto vc deseja inserir!" << endl;
            cout << "Digite 1 se o objeto for um livro." << endl;
            cout << "Digite 2 se o objeto for um CD." << endl;
            cout << "Digite 3 se o objeto for um DVD." << endl;
            int opcaoInserir;
            cin >> opcaoInserir;
            if (opcaoInserir == 1)
            {
                cin.ignore();
                Livro *livro = new Livro;
                cout << "Informe o titulo do livro:" << endl;
                string tituloLivro;
                getline(cin, tituloLivro);
                livro->setNome(tituloLivro);
                cout << "Informe o autor do livro:" << endl;
                string nomeAutor;
                getline(cin, nomeAutor);
                livro->setAutor(nomeAutor);
                cout << "Informe a editora do livro:" << endl;
                string nomeEditora;
                getline(cin, nomeEditora);
                livro->setEditora(nomeEditora);
                cout << "Informe o ISBN do livro: " << endl;
                double isbn;
                cin >> isbn;
                livro->setISBN(isbn);
                cout << "Informe o ano de lançamento do livro: " << endl;
                double anoLancamento;
                cin >> anoLancamento;
                livro->setAnoLancamento(anoLancamento);
                acervo->inserirMidiaLivro(livro);
            }
            else if (opcaoInserir == 2)
            {
                cin.ignore();
                CD *cd = new CD;
                cout << "Informe o nome do CD:" << endl;
                string nomeCD;
                getline(cin, nomeCD);
                cd->setNome(nomeCD);
                cout << "Informe o compositor do CD:" << endl;
                string nomeCompositor;
                getline(cin, nomeCompositor);
                cd->setCompositor(nomeCompositor);
                cout << "Informe a quantidade de faixas do CD:" << endl;
                int qtFaixas;
                cin >> qtFaixas;
                cd->setQtFaixas(qtFaixas);
                cin.ignore();
                cout << "Informe a gravadora do CD: " << endl;
                string gravadora;
                getline(cin, gravadora);
                cd->setGravadora(gravadora);
                cout << "Informe o ano de lançamento do CD: " << endl;
                double anoLancamento;
                cin >> anoLancamento;
                cd->setAnoLancamento(anoLancamento);
                acervo->inserirMidiaCD(cd);
            }
            else if (opcaoInserir == 3)
            {
                cin.ignore();
                DVD *dvd = new DVD;
                cout << "Informe o titulo do DVD:" << endl;
                string tituloDVD;
                getline(cin, tituloDVD);
                dvd->setNome(tituloDVD);
                cout << "Informe o diretor do DVD:" << endl;
                string nomeDiretor;
                getline(cin, nomeDiretor);
                dvd->setDiretor(nomeDiretor);
                cout << "Informe a duraçao do DVD:" << endl;
                double duracaoDVD;
                cin >> duracaoDVD;
                dvd->setDuracao(duracaoDVD);
                cin.ignore();
                cout << "Informe a classificação do DVD: " << endl;
                int classificacaoDVD;
                cin >> classificacaoDVD;
                cin.ignore();
                dvd->setClassificacao(classificacaoDVD);
                cout << "Informe o ano de lançamento do CD: " << endl;
                double anoLancamento;
                cin >> anoLancamento;
                dvd->setAnoLancamento(anoLancamento);
                acervo->inserirMidiaDVD(dvd);
            }
        }
        else if (opcao == 2)
        {
            cout << "Agora digite qual tipo de objeto vc deseja remover!" << endl;
            cout << "Digite 1 se o objeto for um livro." << endl;
            cout << "Digite 2 se o objeto for um CD." << endl;
            cout << "Digite 3 se o objeto for um DVD." << endl;
            int opcaoRemover;
            cin >> opcaoRemover;
            if (opcaoRemover == 1)
            {
                cin.ignore();
                cout << "Insira nome do livro que quer remover: " << endl;
                string nomeLivro;
                getline(cin, nomeLivro);
                acervo->removerItem(nomeLivro, tipo1);
            }
            else if (opcaoRemover == 2)
            {
                cin.ignore();
                cout << "Insira nome do CD que quer remover: " << endl;
                string nomeCD;
                getline(cin, nomeCD);
                acervo->removerItem(nomeCD, tipo2);
            }
            else if (opcaoRemover == 3)
            {
                cin.ignore();
                cout << "Insira nome do DVD que quer remover: " << endl;
                string nomeDVD;
                getline(cin, nomeDVD);
                acervo->removerItem(nomeDVD, tipo3);
            }
        }
        else if (opcao == 3)
        {
            cout << "Mostrando itens do acervo..." << endl;
            acervo->verAcervo();
        }
        else if (opcao == 4)
        {
            acervo->verEstatisticas();
        }
        else if (opcao == 5)
        {
            cout << "Editar um item :" << endl;
            cout << "Digite 1 para editar um livro!" << endl
                 << "Digite 2 para editar um CD!" << endl
                 << "Digite 3 para editar um DVD!" << endl;
            int opcaoEditar;
            cin >> opcaoEditar;
            cin.ignore();
            if (opcaoEditar == 1)
            {
                cout << "Digite 1 para editar o titulo do livro." << endl;
                cout << "Digite 2 para editar o autor do livro." << endl;
                cout << "Digite 3 para editar a editora do livro." << endl;
                cout << "Digite 4 para editar o ISBN do livro." << endl;
                cout << "Digite 5 para editar o ano do lançamento do livro." << endl;
                int atributo;
                cin >> atributo;
                cin.ignore();
                if (atributo == 1)
                {
                    cout << "Digite o titulo do livro que você quer alterar!" << endl;
                    string tituloLivroEditar;
                    getline(cin, tituloLivroEditar);
                    acervo->editarItemLivro(tituloLivroEditar, tipo1, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 2)
                {
                    cout << "Digite o titulo do livro que você quer alterar!" << endl;
                    string tituloLivroEditar;
                    getline(cin, tituloLivroEditar);
                    acervo->editarItemLivro(tituloLivroEditar, tipo1, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 3)
                {
                    cout << "Digite o titulo do livro que você quer alterar!" << endl;
                    string tituloLivroEditar;
                    getline(cin, tituloLivroEditar);
                    acervo->editarItemLivro(tituloLivroEditar, tipo1, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 4)
                {
                    cout << "Digite o titulo do livro que você quer alterar!" << endl;
                    string tituloLivroEditar;
                    getline(cin, tituloLivroEditar);
                    acervo->editarItemLivro(tituloLivroEditar, tipo1, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 5)
                {
                    cout << "Digite o titulo do livro que você quer alterar!" << endl;
                    string tituloLivroEditar;
                    getline(cin, tituloLivroEditar);
                    acervo->editarItemLivro(tituloLivroEditar, tipo1, atributo);
                    cout << "Editado!" << endl;
                }
            }
            else if (opcaoEditar == 2)
            {
                cout << "Digite 1 para editar o nome do CD." << endl;
                cout << "Digite 2 para editar o compositor do CD." << endl;
                cout << "Digite 3 para editar a quantidade de faixas do CD." << endl;
                cout << "Digite 4 para editar a gravadora do CD." << endl;
                cout << "Digite 5 para editar o ano do lançamento do CD." << endl;
                int atributo;
                cin >> atributo;
                cin.ignore();
                if (atributo == 1)
                {
                    cout << "Digite o nome do CD que você quer alterar: " << endl;
                    string nomeCdEditar;
                    getline(cin, nomeCdEditar);
                    acervo->editarItemCD(nomeCdEditar, tipo2, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 2)
                {
                    cout << "Digite o nome do CD que você quer alterar: " << endl;
                    string nomeCdEditar;
                    getline(cin, nomeCdEditar);
                    acervo->editarItemCD(nomeCdEditar, tipo2, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 3)
                {
                    cout << "Digite o nome do CD que você quer alterar: " << endl;
                    string nomeCdEditar;
                    getline(cin, nomeCdEditar);
                    acervo->editarItemCD(nomeCdEditar, tipo2, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 4)
                {
                    cout << "Digite o nome do CD que você quer alterar: " << endl;
                    string nomeCdEditar;
                    getline(cin, nomeCdEditar);
                    acervo->editarItemCD(nomeCdEditar, tipo2, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 5)
                {
                    cout << "Digite o nome do CD que você quer alterar: " << endl;
                    string nomeCdEditar;
                    getline(cin, nomeCdEditar);
                    acervo->editarItemCD(nomeCdEditar, tipo2, atributo);
                    cout << "Editado!" << endl;
                }
            }
            else if (opcaoEditar == 3)
            {
                cout << "Digite 1 para editar o titulo do DVD." << endl;
                cout << "Digite 2 para editar o diretor do DVD." << endl;
                cout << "Digite 3 para editar a duração do DVD." << endl;
                cout << "Digite 4 para editar a classificação do DVD." << endl;
                cout << "Digite 5 para editar o ano do lançamento do DVD." << endl;
                int atributo;
                cin >> atributo;
                cin.ignore();
                if (atributo == 1)
                {
                    cout << "Digite o nome do DVD que você quer alterar: " << endl;
                    string nomeDvdEditar;
                    getline(cin, nomeDvdEditar);
                    acervo->editarItemDVD(nomeDvdEditar, tipo3, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 2)
                {
                    cout << "Digite o nome do DVD que você quer alterar: " << endl;
                    string nomeDvdEditar;
                    getline(cin, nomeDvdEditar);
                    acervo->editarItemDVD(nomeDvdEditar, tipo3, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 3)
                {
                    cout << "Digite o nome do DVD que você quer alterar: " << endl;
                    string nomeDvdEditar;
                    getline(cin, nomeDvdEditar);
                    acervo->editarItemDVD(nomeDvdEditar, tipo3, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 4)
                {
                    cout << "Digite o nome do DVD que você quer alterar: " << endl;
                    string nomeDvdEditar;
                    getline(cin, nomeDvdEditar);
                    acervo->editarItemDVD(nomeDvdEditar, tipo3, atributo);
                    cout << "Editado!" << endl;
                }
                else if (atributo == 5)
                {
                    cout << "Digite o nome do DVD que você quer alterar: " << endl;
                    string nomeDvdEditar;
                    getline(cin, nomeDvdEditar);
                    acervo->editarItemDVD(nomeDvdEditar, tipo3, atributo);
                    cout << "Editado!" << endl;
                }
            }
        }
        else if (opcao == 6)
        {
            sair = true;
            cout << "Fechando acervo..." << endl;
        }
    }
}