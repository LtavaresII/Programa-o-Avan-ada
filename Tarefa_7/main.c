#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int **x, **y, **z;
    int nl = 3, nc = 4;
    int nlx, ncx, nly, ncy, nlz, ncz;
    int i, j;

    nlx = nl, ncx = nc;
    // alocam a matriz x
    x = (int**) malloc(nlx*sizeof (int*));

    // verificar se a memoria esta alocada ou não
    if(x == NULL){
        exit(0);
    }

    // alocam o vetor auxiliar de x
    x[0] = (int*) malloc(nlx*ncx*sizeof (int));

    // ajusta os enderecos no array auxiliar de x
    for(i = 1; i < nlx; i++){
        x[i] = x[i-1] + ncx;
    }

    nly = nl, ncy = nc;
    // alocam a matriz y e seu vetor auxiliar
    y = (int**) malloc(nly*sizeof (int*));
    y[0] = (int*) malloc(nly*ncy*sizeof (int));

    // ajusta os enderecos no array auxiliar de y
    for(i = 1; i < nly; i++){
        y[i] = y[i-1] + ncy;
    }

    nlz = nc, ncz = nl;
    // alocam a matriz z e seu vetor auxiliar
    z = (int**) malloc(nlz*sizeof (int*));
    z[0] = (int*) malloc(nlz*ncz*sizeof (int));

    // ajusta os enderecos no array auxiliar de z
    for(i = 1; i < nlz; i++){
        z[i] = z[i-1] + ncz;
    }

    // atribuir valores a matriz x
    x[0][0] = 3; x[0][1] = 4;
    x[0][2] = 1; x[0][3] = 2;

    x[1][0] = 5; x[1][1] = 6;
    x[1][2] = -1; x[1][3] = 9;

    x[2][0] = 7; x[2][1] = 8;
    x[2][2] = 3; x[2][3] = 3;

    // copiar "x" para "y"
    memcpy(y[0], x[0], nly*ncy*sizeof (int));

    // transposta de x (matriz z)
    for(i = 0; i < nlz; i++){
        for(j = 0; j < ncz; j++){
            z[i][j] = x[j][i];
        }
    }

    // mostrar matriz x
    printf("Matriz X: \n");
    for(i = 0; i < nlx; i++){
        for(j = 0; j < ncx; j++){
            printf("%2d, ",x[i][j]);
        }
        printf("\n");
    }

    // mostrar matriz y
    printf("Matriz Y: \n");
    for(i = 0; i < nly; i++){
        for(j = 0; j < ncy; j++){
            printf("%2d, ",y[i][j]);
        }
        printf("\n");
    }

    // mostrar matriz z
    printf("Matriz Z: \n");
    for(i = 0; i < nlz; i++){
        for(j = 0; j < ncz; j++){
            printf("%2d, ",z[i][j]);
        }
        printf("\n");
    }

    // liberar memoria de x
    free(x[0]);
    free(x);

    // liberar memoria de y
    free(y[0]);
    free(y);

    // liberar memoria de z
    free(z[0]);
    free(z);

    return 0;
}
