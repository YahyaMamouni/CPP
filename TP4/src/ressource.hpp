#ifndef RESSOURCE_HPP
#define RESSOURCE_HPP

#include <iostream>

class Ressource{
    private:
        int stock{};
    public:
        Ressource(int s=0){
            stock=s;
        }

        int getStock(){
            return stock;
        }

        void consommer(int consumed_stocks){
            stock = stock - consumed_stocks;
        }
};

#endif