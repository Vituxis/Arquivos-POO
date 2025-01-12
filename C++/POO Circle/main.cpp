#include <iostream>
#include "circle.h"

using namespace std;

int main(){

Circle c1;
Circle c2(15.7, 8.9, -5.1);
Circle c3(7.7);

cout << "Circle c1: ";
c1.imprime();
cout << "Circle c2: ";
c2.imprime();
cout << "Circle c3: ";
c3.imprime();

    system("pause");
    return 0;
}