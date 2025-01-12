#ifndef PESSOA_H
#define PESSOA_H
#include <string>

using namespace std;

class Pessoa{
    private:
        string nome;
        int idade;
        float altura;


    public:
        Pessoa(string, int, float);
        ~Pessoa(){ }
        void set_name(string);
        string get_name();
        void set_age(int);
        int get_age();
        void set_height(float);
        float get_height();
        void print();


};

#endif //PESSOA_H