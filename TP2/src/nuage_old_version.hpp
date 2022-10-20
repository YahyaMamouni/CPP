#include <vector>
#include <iterator>
#include <algorithm>
#include <iterator>
#include <cassert>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"

template <class T>
class Nuage{
    private:
        std::vector<T> nuages;
    public:
        unsigned int size() const {
            if (nuages.empty()){
                return 0.0;
            }
            else{
                return nuages.size();
            }
            
        }
        void ajouter(const T & p){
            nuages.push_back(p);
        }
        // Defining a const_iterator type we will use
        // We add typename just to assure the compiler check notion
        typedef typename std::vector<T>::const_iterator const_iterator;

        const_iterator begin() const {
            return const_iterator(nuages.begin());
        }
        const_iterator end() const {
            return const_iterator(nuages.end());
        }

        /*
        friend Cartesien barycentre(Nuage & n) {
            double sumX = 0.0, sumY = 0.0;
            for(Point * p : n) {
                sumX += p->getX();
                sumY += p->getY();
            }
            Cartesien c(sumX/n.size(), sumY/n.size());
            return c;
        }*/
     
};

// Template of barycentre_v1
template <class T>
T barycentre_v1(const Nuage<T> & n){
    double sumX = 0.0, sumY = 0.0;
    for(T p : n) {
        Cartesien c(p);
    
        sumX += c.getX();
        sumY += c.getY();
    }
    if (n.size() == 0.0){
       return T(Cartesien(0.0, 0.0));
    }
    else {
        return T(Cartesien(sumX/n.size(), sumY/n.size()));
    }
}

// Specialization of barycentre_v1
template <>
Polaire barycentre_v1 <Polaire> (const Nuage<Polaire> &n){
    double sumAngle = 0.0;
    double sumDistance = 0.0;
    for (Polaire p : n){
        sumAngle += p.getAngle();
        sumDistance += p.getDistance();
    }
    if (n.size() == 0.0){
        return Polaire(0.0,0.0);
    }
    else{
        return Polaire(sumAngle/n.size(), sumDistance/n.size());
    }
}

/*Wrong version of barycentrev_2 but all tests pass*/
/*
template <class T>
T barycentre_v2(const Nuage<T> & n){
    double sumX = 0.0, sumY = 0.0;
    for(T p : n) {
        Cartesien c(p);
    
        sumX += c.getX();
        sumY += c.getY();
    }
    if (n.size() == 0.0){
       return T(Cartesien(0.0, 0.0));
    }
    else {
        return T(Cartesien(sumX/n.size(), sumY/n.size()));
    }
}

// Overloaded barycentre_v2
template <class T>
T barycentre_v2(const std::vector<T> & n){
    double sumX = 0.0, sumY = 0.0;
    for(T p : n) {
        Cartesien c(p);
    
        sumX += c.getX();
        sumY += c.getY();
    }
    if (n.size() == 0.0){
       return T(Cartesien(0.0, 0.0));
    }
    else {
        return T(Cartesien(sumX/n.size(), sumY/n.size()));
    }
}

*/






/*
    //Functor 1
    class BarycentreCartesien{
        public :
            Cartesien operator()(Nuage & n) {
                return barycentre(n);
            }
    };

    //Functor 2
    class BarycentrePolaire{
        public :
            Polaire operator()(Nuage & n){
                Polaire p(BarycentreCartesien()(n));
                return p;
            }
            
    };
*/
    