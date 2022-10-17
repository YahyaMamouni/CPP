#include <vector>
#include <iterator>
#include <algorithm>
#include <iterator>
#include <cassert>
#include "point.hpp"
#include "cartesien.hpp"
#include "polaire.hpp"


class Nuage{
    private:
        std::vector<Point*> nuages;
    public:
        unsigned int size();
        void ajouter(Point & p);
    //from github   :   https://gist.github.com/jeetsukumaran/307264
    /*    class const_iterator {
                private:
                    std::vector<Point *>::iterator _ptr;
                public:
                    const_iterator(std::vector<Point *>::iterator p): _ptr(p){
                    }

                    const_iterator & operator++(){
                        _ptr++;
                        return *this;
                    }

                    const_iterator operator++(int) {
                        const_iterator ret_val = *this;
                        ++(*this);
                        return ret_val;
                    }

                    friend bool operator==(const_iterator a, const_iterator b) {
                        return a._ptr == b._ptr;
                    }

                    friend bool operator!=(const_iterator a, const_iterator b) {
                        return a._ptr != b._ptr;
                    }

                    Point * operator *() {
                        return *_ptr;
                    }
        };*/
        // Defining a const_iterator type we will use
        typedef std::vector<Point*>::const_iterator const_iterator;

        const_iterator begin() {
            return const_iterator(nuages.begin());
        }
        const_iterator end() {
            return const_iterator(nuages.end());
        }
        
        friend Cartesien barycentre(Nuage & n) {
            double sumX = 0.0, sumY = 0.0;
            for(Point * p : n) {
                sumX += p->getX();
                sumY += p->getY();
            }
            Cartesien c(sumX/n.size(), sumY/n.size());
            return c;
        }

    
        
};

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