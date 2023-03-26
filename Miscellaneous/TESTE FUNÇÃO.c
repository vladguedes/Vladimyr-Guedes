#include <stdio.h>
#include <stdlib.h>

void teste(char nome[2][50]) {
    printf("\n\n%s\n\n", nome[0]);
    printf("\n\n%s\n\n", nome[1]);
}

int main(void) {

    char nomes[2][50];

    printf("Digite um nome: ");
    scanf(" %[^\n]s", nomes[0]);
    printf("\nDigite outro nome: ");
    scanf(" %[^\n]s", nomes[1]);

    teste(nomes);

    printf("\nACABOU");

    return(0);
}