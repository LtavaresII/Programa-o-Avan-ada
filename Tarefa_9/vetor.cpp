#include "vetor.h"
#include <cmath>

// Implementção do metodo setX()
// no ESCOPO da classe Vetor

using namespace std;

void Vetor::setX(float mx){
    x = mx;
}

float Vetor::getX(void){
    return x;
}

void Vetor::setY(float my){
    y = my;
}

float Vetor::getY(void){
    return y;
}

float Vetor::norma(void){
    float ret;
    ret = sqrt(x*x+y*y);
    return ret;
}
// <mouse right>->refactor-> add public declaration
float Vetor::angulo(void){
    float ang;
    ang = atan2(y,x);
    return ang;
}

Vetor Vetor::mult(float a){

}

Vetor Vetor::unit(void){

}