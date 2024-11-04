#include <stdio.h>

int main() {
    int a = 10, b = 3;
    int soma, subtracao, multiplicacao, divisao, modulo;

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;
    modulo = a % b; // resto de divisao

    //if((A-B)==0);

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);
    printf("Módulo: %d\n", modulo);

    //operadores lógicos
    //e(conjunção) // if( a < 10 && a > 0 ) se a = 2 então a expressão é verdadeira
    //ou(disjunção) // if(a >= 0|| b >=0 )
     // if(!(a== b)) a negação é verdadeira



    return 0;
}