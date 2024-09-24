#include <stdio.h>

int recursao(int *vetor, int tam);

int main(void){
    int array[3] = {2, 4, 6};
    int length;

    length = sizeof(array)/sizeof(array[0]);
    //printf("%d\n", lenght);
    printf("%d\n", recursao(array, length - 1));

    return 0;
}

int recursao(int *vetor, int tam){
    int cont = 0;

    if (tam == 0)
        return vetor[0];
    else
        return vetor[tam] + recursao(vetor, tam - 1);
}