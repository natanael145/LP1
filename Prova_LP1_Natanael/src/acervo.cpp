#include "../include/acervo.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

Acervo::Acervo() {}
//CONTROLE DE QUANTIDADE DE ITENS NO ACERVO
void Acervo::setQtLivros()
{
    this->qtLivros++;
}
void Acervo::setQtLivros2()
{
    this->qtLivros--;
}
int Acervo::getQtLivros()
{
    return this->qtLivros;
}
void Acervo::setQtCD()
{
    this->qtCD++;
}
void Acervo::setQtCD2()
{
    this->qtCD--;
}
int Acervo::getQtCD()
{
    return this->qtCD;
}
void Acervo::setQtDVD()
{
    this->qtDVD++;
}
void Acervo::setQtDVD2()
{
    this->qtDVD--;
}
int Acervo::getQtDVD()
{
    return this->qtDVD;
}
//FUNÇÕES PARA INSERIR TODOS TIPOS DE MIDIAS
void Acervo::inserirMidiaLivro(Livro *item)
{
    Produto *temp = item;
    verificarItem(temp);
}
void Acervo::inserirMidiaCD(CD *item)
{
    Produto *temp = item;
    verificarItem(temp);
}
void Acervo::inserirMidiaDVD(DVD *item)
{
    Produto *temp = item;
    verificarItem(temp);
}

//FUNÇÃO QUE MOSTRA TODOS ITENS DO ACERVO
void Acervo::verAcervo()
{
    for (int i = 0; i < (int)this->vetor.size(); i++)
    {
        if (this->vetor[i]->getTipo() == "Livro")
        {
            Livro *t = (Livro *)(this->vetor[i]);
            cout << *t;
        }
        else if (this->vetor[i]->getTipo() == "CD")
        {
            CD *cd = (CD *)(this->vetor[i]);
            cout << *cd;
        }
        else if (this->vetor[i]->getTipo() == "DVD")
        {
            DVD *dvd = (DVD *)(this->vetor[i]);
            cout << *dvd;
        }
    }
}
//FUNÇÃO QUE REMOVE ITEM DO ACERVO PELO NOME  E TIPO
void Acervo::removerItem(string nome, string tipo)
{
    int aux;
    for (int i = 0; i < (int)this->vetor.size(); i++)
    {
        if (this->vetor[i]->getNome() == nome && this->vetor[i]->getTipo() == tipo)
        {
            aux = i;
            this->vetor.erase(vetor.begin() + aux);
            if (tipo == "Livro")
            {
                cout << "Livro removido do acervo!" << endl;
                setQtLivros2();
            }
            else if (tipo == "CD")
            {
                cout << "CD removido do acervo!" << endl;
                setQtCD2();
            }
            else if (tipo == "DVD")
            {
                cout << "DVD removido do acervo!" << endl;
                setQtDVD2();
            }
            return;
        }
    }
    cout << "Item não está no acervo!" << endl;
}
//FUNÇÃO QUE FAZ VERIFICACAO E INSERÇÃO DE ITENS
void Acervo::verificarItem(Produto *item)
{
    for (int i = 0; i < (int)this->vetor.size(); i++)
    {
        if (this->vetor[i]->getNome() == item->getNome() && this->vetor[i]->getTipo() == item->getTipo())
        {
            cout << "O " << this->vetor[i]->getTipo() << " " << this->vetor[i]->getNome() << " já está no acervo!" << endl;
            return;
        }
    }
    this->vetor.push_back(item);
    if (item->getTipo() == "Livro")
    {
        cout << "Livro adcionado ao acervo!" << endl;
        setQtLivros();
    }
    else if (item->getTipo() == "CD")
    {
        cout << "CD adcionado ao acervo!" << endl;
        setQtCD();
    }
    else if (item->getTipo() == "DVD")
    {
        cout << "DVD adcionado ao acervo!" << endl;
        setQtDVD();
    }
}
//EDITAR ITEM ESPECIFICO DO ACERVO POR NOME E TIPO
void Acervo::editarItemLivro(string nome, string tipo, int atributo)
{
    for (int i = 0; i < (int)this->vetor.size(); i++)
    {
        if ((this->vetor[i]->getNome() == nome) && (this->vetor[i]->getTipo() == tipo))
        {
            Livro *t = (Livro *)(this->vetor[i]);
            if (atributo == 1)
            {
                cout << "Digite o novo titulo do livro : " << endl;
                string novoNome;
                getline(cin, novoNome);
                t->setNome(novoNome);
            }
            else if (atributo == 2)
            {
                cout << "Digite o novo autor do livro: " << endl;
                string novoAutor;
                getline(cin, novoAutor);
                t->setAutor(novoAutor);
            }
            else if (atributo == 3)
            {
                cout << "Digite a nova editora do livro: " << endl;
                string novaEditora;
                getline(cin, novaEditora);
                t->setEditora(novaEditora);
            }
            else if (atributo == 4)
            {
                cout << "Digite o novo ISBN do livro: " << endl;
                double novoISBN;
                cin >> novoISBN;
                cin.ignore();
                t->setISBN(novoISBN);
            }
            else if (atributo == 5)
            {
                cout << "Digite o novo ano de lançamento do livro: " << endl;
                double novoAno;
                cin >> novoAno;
                cin.ignore();
                t->setAnoLancamento(novoAno);
            }
        }
    }
}
void Acervo::editarItemCD(string nome, string tipo, int atributo)
{
    for (int i = 0; i < (int)this->vetor.size(); i++)
    {
        if ((this->vetor[i]->getNome() == nome) && (this->vetor[i]->getTipo() == tipo))
        {
            CD *cd = (CD *)(this->vetor[i]);
            if (atributo == 1)
            {
                cout << "Digite o novo nome do CD : " << endl;
                string novoNome;
                getline(cin, novoNome);
                cd->setNome(novoNome);
            }
            else if (atributo == 2)
            {
                cout << "Digite o novo compositor do CD : " << endl;
                string novoCompositor;
                getline(cin, novoCompositor);
                cd->setCompositor(novoCompositor);
            }
            else if (atributo == 3)
            {
                cout << "Digite a nova quantidade de faixas do CD : " << endl;
                int novaQtFaixas;
                cin >> novaQtFaixas;
                cd->setQtFaixas(novaQtFaixas);
            }
            else if (atributo == 4)
            {
                cout << "Digite a nova gravadora do CD : " << endl;
                string novaGravadora;
                getline(cin, novaGravadora);
                cd->setGravadora(novaGravadora);
            }
            else if (atributo == 5)
            {
                cout << "Digite o novo ano de lançamento do livro: " << endl;
                double novoAno;
                cin >> novoAno;
                cin.ignore();
                cd->setAnoLancamento(novoAno);
            }
        }
    }
}
void Acervo::editarItemDVD(string nome, string tipo, int atributo)
{
    for (int i = 0; i < (int)this->vetor.size(); i++)
    {
        if ((this->vetor[i]->getNome() == nome) && (this->vetor[i]->getTipo() == tipo))
        {
            DVD *dvd = (DVD *)(this->vetor[i]);
            if (atributo == 1)
            {
                cout << "Digite o novo titulo do DVD : " << endl;
                string novoNome;
                getline(cin, novoNome);
                dvd->setNome(novoNome);
            }
            else if (atributo == 2)
            {
                cout << "Digite o novo diretor do DVD : " << endl;
                string novoDiretor;
                getline(cin, novoDiretor);
                dvd->setDiretor(novoDiretor);
            }
            else if (atributo == 3)
            {
                cout << "Digite a nova duração do DVD : " << endl;
                double novaDuracao;
                cin >> novaDuracao;
                dvd->setDuracao(novaDuracao);
            }
            else if (atributo == 4)
            {
                cout << "Digite a nova classificação do DVD : " << endl;
                int novaClassificacao;
                cin >> novaClassificacao;
                cin.ignore();
                dvd->setClassificacao(novaClassificacao);
            }
            else if (atributo == 5)
            {
                cout << "Digite o novo ano de lançamento do livro: " << endl;
                double novoAno;
                cin >> novoAno;
                cin.ignore();
                dvd->setAnoLancamento(novoAno);
            }
        }
    }
}
//ESTATISTICAS DO ACERVO
void Acervo::verEstatisticas()
{
    cout << "O acervo tem : " << this->getQtLivros() << " livro(s)!" << endl;
    cout << "O acervo tem : " << this->getQtCD() << " CD(s)!" << endl;
    cout << "O acervo tem : " << this->getQtDVD() << " DVD(s)!" << endl;
}