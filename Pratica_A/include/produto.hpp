#ifndef PRODUTO_H
#define PRODUTO_H
#include <string>
using namespace std;

class Produto {
    protected:
        string name;
        double price;
        string trademark;
        string description;
        string fab_date;
    public:
        //SETTERS
        void setName(string nameaux);
        void setPrice(double priceaux);
        void setTrademark(string trademarkaux);
        void setDescription(string descriptionaux);
        void setFab_Date(string dateaux);
        //GETTERS
        string getName();
        double getPrice();
        string getTrademark();
        string getDescription();
        string getFab_Date();
};


#endif