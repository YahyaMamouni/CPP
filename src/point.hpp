#ifndef POINT_HPP
#define POINT_HPP

//includes
#include <iostream>
#include <sstream>
#include <string>
#include <set>

class Polaire;
class Cartesien;

class Point{
    public:
        Point();
        friend std::ostream& operator<< (std::ostream& stream, const Point& point) {
            point.afficher(stream);
            return stream;
        }
        virtual void afficher(std::ostream& flux) const = 0;
        virtual void convertir(Polaire& p) const = 0;
        virtual void convertir(Cartesien& c) const = 0;
        virtual double getX() const{ return 0;}
        virtual double getY() const{ return 0;}
        ~Point();
};

#endif