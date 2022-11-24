#ifndef VALEUR_HPP
#define VALEUR_HPP

#include <iostream>


class Valeur{
    private:
        double nombre{};
    public:
        Valeur(const double & n ) : nombre(n) {}
        Valeur() : nombre(0.0) {}

        double getNombre() const {
            return nombre;
        }

        void setNombre(const double & n){
            nombre = n;
        }


        friend bool operator<( const Valeur & v1, const Valeur & v2){
            return v1.getNombre() < v2.getNombre();
        }


/*      WHY THIS DOESNT WORK ?
        bool operator<(Valeur & v1){
            return this->getNombre() < v1.getNombre();
        }
*/
};

#endif