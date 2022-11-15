#ifndef CONSOMMATEUR_HPP
#define CONSOMMATEUR_HPP

#include <iostream>
#include <memory>
#include <ressource.hpp>

class Consommateur{
    private:
        int besoin{};
        std::shared_ptr<Ressource> sp_ressource{};

    public:
        Consommateur(int b, std::shared_ptr<Ressource> r){
            sp_ressource = r;
            besoin = b;
        }

        void puiser(){
            if (besoin > sp_ressource->getStock()){
                sp_ressource->consommer(sp_ressource->getStock());
                sp_ressource = std::shared_ptr<Ressource>(nullptr);
            }
            else {
                sp_ressource->consommer(besoin);
            }
            
        }


};


#endif