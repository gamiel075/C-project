#include <stdio.h>
#include <stdlib.h>

struct Pessoa {
    char nome[50];
    int idade;
};

int main() {
    struct Pessoa pessoa1;

    // Inicializando valores da struct
    snprintf(pessoa1.nome, sizeof(pessoa1.nome), "Gabriel");
    pessoa1.idade = 21;

    // Exibindo os valores da struct
    printf("Nome: %s\n", pessoa1.nome);
    printf("Idade: %d\n", pessoa1.idade);

    return 0;
}
