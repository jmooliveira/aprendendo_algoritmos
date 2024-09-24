#include <stdio.h>

int recursao(int *vetor, int tam);

int main(void){
    int array[4] = {15, 4, 17, 13};
    int length;

    length = sizeof(array)/sizeof(array[0]);
    //printf("%d\n", lenght);
    printf("%d\n", recursao(array, length - 1));

    return 0;
}

int recursao(int *vetor, int tam){
    int rec;

    if (tam == 0)
        return vetor[0];
    else{
       rec = recursao(vetor, tam - 1);
        if (rec < vetor[tam])
            return vetor[tam];
        return rec;
    }
}