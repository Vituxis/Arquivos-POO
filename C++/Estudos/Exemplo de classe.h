#ifndef TEMPO_HPP   //Include guards - Evita que a include seja inlcuida mais de uma vez
#define TEMPO_HPP
//O construtor e destrutor sempre terão o mesmo nome da Classe
//Membros de dados são as variaveis criadas dentro de uma Classe
class Tempo{
    
//Membros privados
  private:
    int hora, minuto, segundo; //Membros de dados
//Membros publicos
  public:
   Tempo(); // Construtor - Serve para inicializar os membros de dados com valor default
   Tempo(int, int, int); // Outro tipo de Construtor com valores iniciais passados pelos parâmetros
   void setTime(int, int, int);
   void imprimir();
   ~cTime(); // Destrutor - Destruirá o objeto 

    
};

#endif
