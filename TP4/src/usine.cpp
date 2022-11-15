#include <usine.hpp>

void remplir(paquet_t & paquet, UsineCarte & usine){
    for (int i = 0; i <  usine.getFixedNumber() ; i++){
        paquet.push_back(usine.getCarte());
    }
}

//int UsineCarte::counter = 0;