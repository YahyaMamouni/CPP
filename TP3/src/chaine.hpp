#ifndef CHAINE_HPP
#define CHAINE_HPP

#include <demangle.hpp>
#include <exception.hpp>
#include <string>
#include <exception>
#include <iostream>
#include <vector>

template <typename T> 
std::string chaine(T x){
    // Returns the type of the variable
    // demangle function helps you avoid #
    throw ExceptionChaine( "Conversion en chaine impossible pour '" + demangle(typeid(x).name()) +"'" );
}

// Spec for string variables
template<>
std::string chaine <std::string> (std::string x){
    return x;
}

// Spec for int variables
template<>
std::string chaine (int x){
    return std::to_string(x);
}

// Spec for double variables
template<>
std::string chaine (double x){
    return std::to_string(x);
}

// Spec for variadic template
template<typename ...TYPES>
std::string chaine /*<TYPES...>*/ (const TYPES &... args){
    //std::string res = (chaine(args)+" " )+ ...;           What the teacher said it was a good syntax
    std::string res = (chaine(args+' ') + ...);
    std::string st = res.substr(0, res.size()-1);           // Not good
    return st;
}


#endif