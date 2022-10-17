#ifndef NUAGE
#define NUAGE_HPP

#include "nuage.hpp"

unsigned int Nuage::size(){
    return nuages.size();
}

void Nuage::ajouter(Point & p){
    nuages.push_back(&p);
}


#endif