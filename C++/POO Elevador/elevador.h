#ifndef ELEVADOR_H
#define ELEVADOR_H

class Elevador{
    private:
        int andaresMax;
        int andarAtual;
        int capaMaxDoElevador;
        int quantPessoas;
        
    public:
        Elevador();
        void inicializar(int, int);
        void entra(int);
        int sai(int);
        void subir(int);
        void descer(int);
        int get_quantPessoas();
        int get_andarAtual();
};
#endif