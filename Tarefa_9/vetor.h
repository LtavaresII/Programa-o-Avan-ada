#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
    float x,y;
public:
    void setX(float mx);
    float getX(void);
    void setY(float my);
    float getY(void);
    // <mouse right>->refactor-> add vetor.cpp
    float norma(void);
    float angulo(void);
    Vetor mult(float a);
    Vetor unit(void);
};

#endif // VETOR_H
