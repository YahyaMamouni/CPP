#include "polaire.hpp"

Polaire::Polaire(): distance(0.0), angle(0.0) {}

Polaire::Polaire(double a, double d): distance(d), angle(a) {}

Polaire::Polaire(const Cartesien& c){
    c.convertir(*this);
}


double Polaire::getAngle() const{
    return angle;
}

double Polaire::getDistance() const{
    return distance;
}

void Polaire::setAngle(double a){
    angle = a;
}

void Polaire::setDistance(double d){
    distance = d;
}

void Polaire::afficher(std::ostream& flux) const{
    flux << "(a=" << std::to_string(int(angle)) << ";d=" << std::to_string(int(distance)) << ")"; 
}

void Polaire::convertir(Cartesien & c) const{
    double x = distance * std::cos(angle * (M_PI/ 180));
    double y = distance * std::sin(angle * (M_PI/ 180));
    c.setX(x);
    c.setY(y);

}

void Polaire::convertir(Polaire & p) const{
    p.setAngle(angle);
    p.setDistance(distance);
}

Polaire::~Polaire(){}