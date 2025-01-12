#ifndef TEMPO_HPP
#define TEMPO_HPP
//O construtor e destrutor sempre terão o mesmo nome da Classe
//Membros de dados são as variaveis criadas dentro de uma Classe
class cTime{
    //Membros privados
  private:
    int hora, minuto, segundo; //Membros de dados
//Membros publicos
  public:
   cTime(); // Construtor - Inicializa os membros de dados com valor default
   cTime(int, int, int); // Outro tipo de Construtor com valores iniciais já pré-definidos
   void setTime(int, int, int);
   void imprimir();
   ~cTime(); // Destrutor - Destruirá o objeto 

    
};

#endif