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
        // Recovering stored type in the vector of nuages in case
        // We choose Nuage object instead of vector
        using value_type = typename std::vector<T>::value_type;
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


template<class whole_element>
auto barycentre_v2(const whole_element & n){
    // Recovering the type stored in the vector
    // passing by value_type is always the first thing you should go for & it's clean and much better than template template
    // Because template template can cause problems so always work with using ... = typename ...::value_type
    using vector_type = typename whole_element::value_type;
    // Init X & Y
    double sumX = 0.0, sumY = 0.0;
    // Iterating over the type found
    for(vector_type p : n) {
        // Forcing it into a cartesien
        Cartesien c(p);

        sumX += c.getX();
        sumY += c.getY();
    }
    // In there are no elements return (0.0,0.0)
    if (n.size() == 0.0){
       return vector_type(Cartesien(0.0, 0.0));
    }
    // In the other hand calculate the avg
    else {
        return vector_type(Cartesien(sumX/n.size(), sumY/n.size()));
    }
}