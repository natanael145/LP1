#ifndef CEL_H
#define CEL_H
#include "produto_duravel.hpp"
#include <string>
using namespace std;

class Celular : public Produto_Duravel{
    protected:
        string ram;
        string megapixels;
    public:
        //SETTERS
        void setRam(string ramaux);
        void setMP(string mpaux);
        //GETTERS
        string getRam();
        string getMP();
};


#endif