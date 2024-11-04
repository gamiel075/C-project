#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declarações de variáveis
    int numero = 10;
    float numerodois = 1.8;
    double number = 34.7;
    char letra = 'A';  // Correção: aspas simples e nome da variável
    //bool homem; verdadeiro ou falo(true e/ou false)
    int numeros[5] = {1, 2, 3, 4, 5};  // Correção: agora com 5 elementos

    // Exibe uma mensagem
    printf("Ola mundo!\n");

    // Exibe os valores das variáveis
    printf("Numero: %d\n", numero);
    printf("Numero dois: %.2f\n", numerodois);
    printf("Double number: %.2f\n", number);
    printf("Letra: %c\n", letra);

    // Exibe os elementos do array
    printf("Array numeros: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;  // O programa termina aqui
}
