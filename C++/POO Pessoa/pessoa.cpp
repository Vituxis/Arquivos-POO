#include "pessoa.h"
#include <string>
#include <iostream>

using namespace std;

        Pessoa::Pessoa(string name, int age, float height){
            nome = name;
            idade = age;
            altura = height;
        }
    
        void Pessoa::set_name(string name){
                nome = name;
        }
        string Pessoa::get_name(){
            return nome;
        }
        void Pessoa::set_age(int age){
            idade = age;
        }
        int Pessoa::get_age(){
            return idade;
        }
        void Pessoa::set_height(float height){
            altura = height;
        }
        float Pessoa::get_height(){
            return altura;
        }
        void Pessoa::print(){
            cout << "Nome: " << nome << "\nIdade: " << idade << "\nAltura: " << altura;
        }