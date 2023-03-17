#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {

    FILE* entrada;
    FILE* saida;
    char nome[20], linha[100];
    float nota1, nota2, nota3, media = 0;

    entrada = fopen("Entrada_q3.txt", "rt");

    if(entrada == NULL){
        puts("Erro!");
        exit(1);
    }

    saida = fopen("Saida_q3.txt", "wt");

    if(saida == NULL){
        puts("ERRO!");
        exit(1);
    }

    while(fgets(linha, 100, entrada) != NULL) {
        sscanf(linha, "%20[^\t]\t%f\t%f\t%f", nome, &nota1, &nota2, &nota3);
        media = (nota1 + nota2 + nota3) / 3;

        fprintf(saida, "%s\t%.1f\t %s\n", nome, media, (media >= 7.0)?"Aprovado!":"Reprovado!");
    }

    fclose(entrada);
    fclose(saida);

    return(0);
}