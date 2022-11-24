#ifndef ECHANTILLON_HPP
#define ECHANTILLON_HPP

#include <iostream>
#include <vector>
#include <valeur.hpp>
#include <algorithm>


class Echantillon{
    private:
        std::vector<Valeur> vec;
    public:
        Echantillon(){}

        int getTaille() const {
            return vec.size();
        }

        void ajouter(double & value){
            vec.push_back(value);
        }

        Valeur getMinimum() const{
            if (this->getTaille() == 0){
                throw std::domain_error("empty container");                 // THROW EXCEPTION
            }
            std::vector<Valeur>::const_iterator result;
            result = std::min_element(vec.begin(), vec.end());
            return *result;
        }
        Valeur getMaximum() const{
            if (this->getTaille() == 0){
                throw std::domain_error("empty container");                 // THROW EXCEPTION
            }
            std::vector<Valeur>::const_iterator result;
            result = std::max_element(vec.begin(), vec.end());
            return *result;
        }

        Valeur getValeur(int index){
            if (index >= this->getTaille() ){
                throw std::out_of_range("Out of range");
            }
            return vec[index];
        }


};


#endif