#include <stdio.h>

void Ordenar(int *x, int *y, int*z);

int main()
{
    int a = 7, b =6, c = 5;

    printf("Antes de Ordenar:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    Ordenar(&a, &b, &c);

    printf("Depois de Ordenar:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

void Ordenar(int *x, int *y, int*z){
    int tmp;

    if(*x > *y){
        // Primeiro e segundo
        tmp = *x;
        *x = *y;
        *y = tmp;
    }

    if(*x > *z){
        // Primeiro e ultimo
        tmp = *x;
        *x = *z;
        *z = tmp;
    }

    if(*y > *z){
        // Segundo e ultimo
        tmp = *y;
        *y = *z;
        *z = tmp;
    }
}
