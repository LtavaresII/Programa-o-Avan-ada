#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
    Vetor v1, v2(3), v3(3,4);

    v1.print();
    v2.print();
    v3.print();

    float a;
    a = v3.multiplica(v3);
    cout << "a = " << a << endl;

    v1.setX(3);
    v1.setY(4);

    return 0;
}
