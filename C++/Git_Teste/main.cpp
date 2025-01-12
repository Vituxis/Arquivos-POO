#include <iostream>
#include "classe.h"

using namespace std;

int main(){
    cout<<"Hello, World";
    cPerson obj1;
    obj1.set_idade(7);
    cout << obj1.get_idade();

    return 0;
}