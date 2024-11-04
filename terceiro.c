#include <stdio.h>


#include <stdio.h>

int main() {
    int num = 42;
    int *ptr = &num;     //** espaço na memória */

    printf("Valor de num: %d\n", num);
    printf("Endereço de num: %p\n", &num);
    printf("Valor armazenado em ptr: %p\n", ptr);
    printf("Valor apontado por ptr: %d\n", *ptr);

    return 0;
}