#include "elevador.h"
#include <iostream>

using namespace std;

int main(){

Elevador teste1;

teste1.inicializar(5, 10);
cout<<teste1.get_andarAtual() <<"\n";
teste1.subir(10);
cout<<teste1.get_andarAtual();

    return 0;
}

//g++ elevador.cpp main.cpp -o main.exe