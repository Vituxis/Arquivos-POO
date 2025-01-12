#include "elevador.h"
#include <iostream>

using namespace std;

/*      int andaresMax;
        int andarAtual;
        int capaMaxDoElevador;
        int quantPessoas;*/

         Elevador::Elevador(){
            andaresMax = 0;
            andarAtual = 0;
            capaMaxDoElevador = 0;
            quantPessoas = 0;
         }
         //seta a capacidade maxima de pessoas e andares do elevador
        void Elevador::inicializar(int capaMaxDoElevador1, int andaresMax1){
            if(andaresMax1 >= 0 && andaresMax1 <= 10){ 
                andaresMax = andaresMax1;     
            }
             else{
               cout << "Muitos andares! Max: 10\n";
             }
               if(capaMaxDoElevador1 >= 0 && capaMaxDoElevador1 <= 5){ 
                    capaMaxDoElevador = capaMaxDoElevador1;
             }
               else{
                  cout << "Capacidade muito alta! Max: 5\n";
             }
        }

            //Colocar pessoas no elevador
        void Elevador::entra(int comeIn){
            int vagasRest = capaMaxDoElevador - quantPessoas;
               if(comeIn > vagasRest){
                cout << "Sem espaco no elevador.\n";
               }
               else{
              quantPessoas += comeIn;
            }
        }

            //Tirar pessoas do elevador
        int Elevador::sai(int getOut){
            if(getOut > quantPessoas){
               return quantPessoas;
         }  else{
               quantPessoas -= getOut;
               return quantPessoas;
             }
        }

         //subir o elevador de andar
        void Elevador::subir(int up){
            int andaresMaxRestantes = andaresMax - andarAtual;
               if( up > andaresMaxRestantes){
               cout << "Impossivel subir alem do andar maximo!\n";
            }  else{
               andarAtual += up;
            }
            
        }
            //subir o elevador de andar
         void Elevador::descer(int down){
               if(down > andarAtual){
               cout << "Impossivel descer abaixo do terreo!\n";
            }  else{
               andarAtual -= down;
            }
         }

            //Obter quantas pessoas tem no elevador
         int Elevador::get_quantPessoas(){
            return quantPessoas;
        }

            //Obter em qual andar o elevador esta
          int Elevador::get_andarAtual(){
            return andarAtual;
        }

        
        