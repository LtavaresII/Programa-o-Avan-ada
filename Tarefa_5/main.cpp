#include <stdio.h>
#include <stdlib.h> // para malloc()/free()

int main()
{
    int *x, *z;
    int y[10];
    int n, i;

    printf("Digite n: ");
    scanf("%d", &n);

    //numero de inteiros que vou precisar(n) vezes o tamanho de um inteiro(sizeof(int))
    x = (int*)malloc(n*sizeof(int));
    z = (int*)malloc(n*sizeof(int));

    x[0] = 1; x[2] = 4; x[3] = -8;
    for(i=0; i<n; i++){
        printf("%d, ",x[i]);
    }
    printf("\n");

    z = x;
    for(i=0; i<n; i++){
        printf("%d, ",z[i]);
    }
    printf("\n");

    z[2] = 5;
    for(i=0; i<n; i++){
        printf("%d, ",z[i]);
    }
    printf("\n");

    for(i=0; i<n; i++){
        printf("%d, ",x[i]);
    }
    printf("\n");

    printf("Endereco: \n");
    printf("y = %p\n", y);
    printf("x = %p\n", x);
    printf("z = %p\n", z);

    printf("Inteiro: \n");
    printf("y = %ld\n", y);
    printf("x = %ld\n", x);
    printf("z = %ld\n", z);

    free(x);

    return 0;
}
