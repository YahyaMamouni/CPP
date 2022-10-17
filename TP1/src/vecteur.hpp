#include <iostream>
#include <string>

class Vecteur{
    private:
        int * table;
        int taille;
        int nb_elem = 0;
    public:
        Vecteur(int cap=10){
            taille = cap;
            table = new int[taille];
        }

        Vecteur(const Vecteur & old_vec){
            taille = old_vec.taille;
            table = new int[taille];
            int* elem_depart = old_vec.table;
            int* elem_arrive = old_vec.table + (old_vec.taille);
            std::copy(elem_depart, elem_arrive, table);
        }

        Vecteur & operator=(const Vecteur & other_vec){
            if (this != &other_vec){
                delete[] table;
                int* elem_depart = other_vec.table;
                int* elem_arrive = other_vec.table + (other_vec.nb_elem);
                table = new int[other_vec.taille];
                std::copy(elem_depart, elem_arrive, table);
                taille = other_vec.taille;
                nb_elem = other_vec.nb_elem;

            }
            return *this;
        }

        int & operator[](int i){
            return table[i];
        }

        int getTaille(){
            return taille;
        }

        int getNbelem(){
            return nb_elem;
        }

        void push_back(int elem){
            if (nb_elem == taille){
                int * tmp_table = new int[taille*2];
                std::copy(table, table+taille, tmp_table);
                delete[] table;
                taille = taille*2;
                table = tmp_table;
            }
            table[nb_elem] = elem;
            nb_elem++;
        }       

        friend std::ostream & operator<<(std::ostream & output,Vecteur & v){
            std::string tmp_string;
            if (v.getNbelem() != 0){
                for (int i = 0 ; i < v.getNbelem() ; i++){
                    tmp_string += std::to_string(v[i]) + " ";
                }
                // Removing last element of string
                tmp_string.pop_back();
            }
            output << tmp_string;
            return output;
        } 

        Vecteur operator+(Vecteur & v){
            Vecteur res;
            res = *this;
            for (int i = 0 ; i < v.getNbelem() ; i++){
                res.push_back(v[i]);
            }
            return res;
        }

        Vecteur operator*(Vecteur & v){
            Vecteur res;
            res = *this;
            int nbelm1 = res.getNbelem();
            int nbelm2 = res.getNbelem();
            if (nbelm1 == nbelm2){
                for (int i = 0 ; i < nbelm1 ; i++){
                    res[i] = res[i] * v[i];
                }
            }
            return res;
        }

        class Iterateur{
            private:
                int * _ptr;
            public:

                Iterateur & operator++(){
                    _ptr++;
                    return _ptr;
                }

                Iterateur operator++(int){
                    Iterateur tmp = *this;
                    operator++();
                    return tmp;
                }

                int & operator*(){
                    return *_ptr;
                }

                bool operator==(const Iterateur a &, const Iterateur b &){
                    return a._ptr == b._ptr;
                }

        };

        const int * begin(){
            return table;
        }

        const int * end(){
            return table + nb_elem;
        }


        ~Vecteur(){
            delete[] table;
        }
};