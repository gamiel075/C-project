//short int idade; // Um inteiro curto para armazenar idades
//long int populacao; // Um inteiro longo para armazenar grandes números
//unsigned char caractere; // Um caractere sem sinal (valores de 0 a 255)

//static int contador = 0; // Variável estática, inicializada apenas uma vez
//extern int valor_global; // Variável declarada em outro arquivo
//register int i; // Sugere que o loop contador 'i' seja armazenado em um registrador

#include <stdio.h>

int main() {
    short int idade = 30;
    long int distancia = 1234567890;
    unsigned char letra = 'A';
    static int contador = 0;
    //unsigned float

    printf("Idade: %hd\n", idade);
    printf("Distância: %ld\n", distancia);
    printf("Letra: %c\n", letra);

    contador++;
    printf("Contador: %d\n", contador);

    char[50]= "gabriel";

    return 0;
}