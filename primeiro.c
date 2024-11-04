
#include <stdio.h>
#include <stdlib.h>


int main() {
    printf("Ola mundo!");
    return 0;


    int numero = 10;
    float numerodois = 1.8;
    double number = 34.7;
    char letra = 'A';

    int numeros[4] = {1, 2, 3, 4}; //* lista simples de um tipo de dado

    printf("Numero: %d\n", numero);
    printf("numero decimal com duas casas antes da virgula: %d\n",number);

    for(int i=0;i < 5; i++){
        printf("%d", numeros[i]);  //* lqço para lista
    }
    printf("\n");


}

