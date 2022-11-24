#ifndef CONSOMMATEUR_HPP
#define CONSOMMATEUR_HPP

#include <iostream>
#include <memory>
#include <ressource.hpp>
#include <vector>

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
            if (sp_ressource == nullptr) return;
            if (besoin > sp_ressource->getStock()){
                sp_ressource->consommer(sp_ressource->getStock());
                sp_ressource = std::shared_ptr<Ressource>(nullptr);
            }
            else {
                sp_ressource->consommer(besoin);
            }
            
        }


};

using ressources_t = std::vector<std::weak_ptr<Ressource>>;

std::ostream & operator<<(std::ostream & flux, ressources_t & ressources){
    
    for (auto& p_res: ressources){
        std::shared_ptr<Ressource> p = p_res.lock();
        if (p){
            flux << p->getStock() << " ";
        }
        else{
            flux << "-" << " ";
        }
    }
}


#endif