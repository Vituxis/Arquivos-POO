#include <iostream>
#include "tempo.h"

using namespace std;


int main(){

    cTime padrao1;
    cTime custom(11, 20, 36);

cout << "Hora padrao: ";
padrao1.imprimir();

cout<< "\nHora customizada: ";
custom.imprimir();

system("pause");
    return 0;
}