#ifndef CLASSE_HPP
#define CLASSE_HPP

class Classe{
    private:
        double bornInf{};
        double bornSup{};
        int quantity{};
    public:
        Classe(const double& inf=0.0,const double& sup=0.0){
            bornInf = inf;
            bornSup = sup;
        }

        double getBorneInf() const{
            return bornInf;
        }

        double getBorneSup() const{
            return bornSup;
        }

        int getQuantite() const{
            return quantity;
        }

        void setBorneInf(const double & inf){
            bornInf = inf;
        }

        void setBorneSup(const double & sup){
            bornSup = sup;
        }

        void setQuantite(const double & quant){
            quantity = quant;
        }

        void ajouter(){
            quantity += 1;
        }

        friend bool operator<(const Classe& c1, const Classe& c2){
            if (c1.getBorneInf() < c2.getBorneInf()) {
                return true;
            }
            return false;
        }

        friend bool operator>(const Classe& c1, const Classe& c2){
            return (c1.getBorneInf() > c2.getBorneInf());
        }

};

#endif