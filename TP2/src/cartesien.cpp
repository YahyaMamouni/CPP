#include "cartesien.hpp"


Cartesien::Cartesien(double a, double b) : x(a), y(b){}
Cartesien::Cartesien() : x(0.0), y(0.0){}

Cartesien::Cartesien(Polaire & p){
    p.convertir(*this);
}

double Cartesien::getX() const{
    return x;
}

double Cartesien::getY() const{
    return y;
}

void Cartesien::setX(double a){
    x = a;
}

void Cartesien::setY(double b){
    y = b;
}

void Cartesien::afficher(std::ostream & flux) const{
    flux << "(x=" << std::to_string((int)x) << ";y=" << std::to_string((int)y) << ")";
}

void Cartesien::convertir(Polaire& p) const{
    double firstVariable = pow(x,2.0);
    double secondVariable = pow(y,2.0);
    p.setDistance(sqrt(firstVariable + secondVariable));
    p.setAngle(atan2(y,x) * (180/M_PI));

}

void Cartesien::convertir(Cartesien& c) const{
    c.setX(x);
    c.setY(y);
}

Cartesien::~Cartesien(){}