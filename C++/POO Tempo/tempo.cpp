#include <iostream>
#include "tempo.h"

using namespace std;

cTime::cTime(){

    hora = 0;
    minuto = 0;
    segundo = 0;
}
   cTime::cTime(int hh, int mm, int ss){
       setTime(hh, mm, ss);

   }
   void cTime::setTime(int hh, int mm, int ss){

        hora = hh;
        minuto = mm;
        segundo = ss;

   }
   void cTime::imprimir(){
    cout << "{" << hora << ":" << minuto << ":" << segundo << "}";
   }
