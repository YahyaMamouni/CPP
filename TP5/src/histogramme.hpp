#ifndef HISTOGRAMME_HPP
#define HISTOGRAMME_HPP

#include <vector>
#include <algorithm>
#include <set>
#include <iostream>

#include <classe.hpp>
#include <echantillon.hpp>


template<typename T>
class ComparateurQuantite{
    public:
        bool operator()(const T& c1, const T& c2){
            if (c1.getQuantite() > c2.getQuantite()) {
                return true;
            }
            else if (c1.getQuantite() < c2.getQuantite()) {
                return false;
            }
            else {
                return c1.getBorneInf() < c2.getBorneInf();
            }
            
        }
       
};



template<typename T=std::less<Classe>>
class Histogramme{
    private:
        //std::vector<Classe> classes;
        std::set<Classe, T> classes;
        double borneInf{};
        double borneSup{};
        int quantite{};

    public:
        Histogramme(double inf, double sup, int qnt){
            borneInf = inf;
            borneSup = sup;
            quantite = qnt;

            double amplitude = (borneSup - borneInf) / quantite;
            double temp = borneInf;

            for (int i = 0 ; i < quantite ; i++){
                //classes.push_back(Classe(temp, temp + amplitude));
                classes.insert(Classe(temp, temp + amplitude));
                temp = temp + amplitude;
            }
        }

/*
        std::vector<Classe> & getClasses(){
            return classes;
        }
*/

        std::set<Classe, T> & getClasses(){
            return classes;
        }

        void ajouter(Echantillon & e){
            for (int i = 0 ; i < e.getTaille() ; i++){
                Valeur v = e.getValeur(i);
                auto it = std::find_if(classes.begin(), classes.end(), 
                [&v](const Classe & c){return v.getNombre() >= c.getBorneInf() && v.getNombre() < c.getBorneSup(); });
                
                (*it).ajouter();

            }
        }

        void ajouter(double & d){
            
                Valeur v = Valeur(d);
                auto it = std::find_if(classes.begin(), classes.end(), 
                [&v](const Classe & c){return v.getNombre() >= c.getBorneInf() && v.getNombre() < c.getBorneSup(); });
                
                auto copy_it = (*it);
                //auto selected_class = classes.extract(it).value();
                copy_it.ajouter();
                //classes.insert(selected_class);

            
        }
};





#endif