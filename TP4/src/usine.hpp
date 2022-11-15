#ifndef USINE_HPP
#define USINE_HPP

#include <iostream>
#include <carte.hpp>
#include <memory>
#include <vector>
#include <algorithm>
#include <iterator>


class UsineCarte{
    private:
    // putting static isn't the right answer because in test 4 by keeping static will cause problems
    // It's better to have a counter per each Usine object
        int counter{};
        int fixed_number{};
    public:

        UsineCarte(const int n=52){
            fixed_number = n;
        }

        std::unique_ptr<Carte> getCarte(){
            if (counter >= fixed_number){
                return std::unique_ptr<Carte>(nullptr);
            }
            else{
                std::unique_ptr<Carte> p(new Carte(counter));
                counter++;
                return p;
            }
        }

        int getCounter(){
            return counter;
        }
        int getFixedNumber(){
            return fixed_number;
        }
        // Disabling copy constructor   
        UsineCarte(const UsineCarte&) = delete;
        // Disabling moving by copy operator
        UsineCarte & operator=(const UsineCarte&) = delete;



};

using paquet_t = std::vector<std::unique_ptr<Carte>>;


void remplir(paquet_t & paquet, UsineCarte & usine);

inline std::ostream & operator<<(std::ostream & flux,const paquet_t & paquet){
    for (auto& p_carte : paquet){
        flux << p_carte->getValeur() << " ";
    }
    return flux;
}

#endif