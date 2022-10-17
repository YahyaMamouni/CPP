#ifndef POLAIRE_HPP
#define POLAIRE_HPP

//includes
#include <iostream>
#include "point.hpp"
#include "cartesien.hpp"

class Cartesien;

class Polaire : public Point{
    private:
        double distance = 0.0;
        double angle = 0.0;

    public:
        Polaire();
        Polaire(double a, double d);
        Polaire(const Cartesien & c);
        double getAngle() const;
        double getDistance() const;
        void setAngle(double a);
        void setDistance(double d);
        void afficher(std::ostream& flux) const;
        friend std::ostream& operator<< (std::ostream& stream, const Polaire& point) {
            point.afficher(stream);
            return stream;
        }
        void convertir(Cartesien & c) const;
        void convertir(Polaire & p) const;
        ~Polaire();
};


#endif