#include <stdio.h>

int recursao(int *vetor, int tam);

int main(void){
    int array[3] = {2, 4, 6};
    int length;

    length = sizeof(array)/sizeof(array[0]);
    //printf("%d\n", lenght);
    printf("%d\n", recursao(array, length));

    return 0;
}

int recursao(int *vetor, int tam){

    if (tam == 0)
        return 0;
    else{
        recursao(vetor, tam - 1);
        return 1 + recursao(vetor, tam - 1);
    }
}