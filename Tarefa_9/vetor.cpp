#include "vetor.h"
#include <cmath>
#include <iostream>

// Implementção do metodo setX()
// no ESCOPO da classe Vetor

using namespace std;

//Vetor::Vetor(){
    //cout << "Contrutor Padrao\n";
    //x=0; y=0;
//}

Vetor::Vetor(float mx, float my){
    cout << "Construtor c/ args\n";
    x = mx; y = my;
}

Vetor::~Vetor(){
    cout << "Destrutor\n";
}
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

Vetor Vetor::multiplica(float a){
    Vetor ret;
    ret.x = a*x;
    ret.y = a*y;
}

float Vetor::multiplica(Vetor v){
    float ret;
    ret = x*v.x+y*v.y;
    return ret;
}

void Vetor::print(){
    cout<< "(" << x << "," << y << ")\n";
}
