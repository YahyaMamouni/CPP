#ifndef CARTESIEN_HPP
#define CARTESIEN_HPP

#include <iostream>
#include <cmath>
#include "polaire.hpp"
#include "point.hpp"

class Polaire;

class Cartesien : public Point{

    private:
        double x = 0.0;
        double y = 0.0;

    public:
        Cartesien(double a, double b);
        Cartesien();
        Cartesien(Polaire & p);
        double getX() const;
        double getY() const;
        void setX(double a);
        void setY(double b);
        void afficher(std::ostream & flux) const;
        friend std::ostream& operator<< (std::ostream& stream, const Cartesien& point) {
            point.afficher(stream);
            return stream;
        }
        void convertir(Polaire& p) const;
        void convertir(Cartesien& c) const;
        ~Cartesien();

};

#endif