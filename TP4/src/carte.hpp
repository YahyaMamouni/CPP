#ifndef CARTE_HPP
#define CARTE_HPP

#include <iostream>

class Carte{
    private:
        static int carte_counter;
        int valeur;
        Carte(){
            valeur = 0;
            carte_counter++;
        }
        friend class UsineCarte;
        Carte(int v){
            valeur = v;
            carte_counter++;
        }
        friend class UsineCarte;
        
        
    public:
        int getValeur(){
            return valeur;
        }
        // Disabling copy constructor
        Carte(const Carte&) = delete;
        // Disabling moving by copy operator
        Carte & operator=(const Carte&) = delete;

         ~Carte(){
            carte_counter--;
        }
        
        static int getCompteur(){
            return carte_counter;
        }


};

#endif