#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
    float x,y;
public:
    // chamado construtor PADRAO (default)
    //Vetor();
    // construtor com argumentos
    // E VALORES INICIAIAS
    Vetor(float mx =0, float my = 0);

    // destrutor da classe
    ~Vetor();

    void setX(float mx);
    float getX(void);
    void setY(float my);
    float getY(void);
    // <mouse right>->refactor-> add vetor.cpp
    float norma(void);
    float angulo(void);
    // sobrecargas da funcao multiplica
    Vetor multiplica(float a);
    float multiplica(Vetor v);
    // nao é permitido!!!
    // Vetor multiplica(Vetor v);
    //Vetor unit(void);
    void print();
};

#endif // VETOR_H
