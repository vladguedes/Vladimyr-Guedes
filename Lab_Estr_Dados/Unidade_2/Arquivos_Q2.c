#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* entrada;
    FILE* saida;
    char linha[100];
    int vetor[10];
    int i = 0;
    float media = 0;
    int maior, menor;

    
    entrada = fopen("Numeros.txt", "rt");
    if(entrada == NULL){
        printf("Arquivo \"Numeros.txt\" nao encontrado!\n");
        exit(1);
    }

    saida = fopen("Saida_Num.txt", "wt");
    if(saida == NULL){
        printf("Arquivo \"Saida_num.txt\" nao encontrado!\n");
        exit(1);
    }

    
    while(fgets(linha, 100, entrada) != NULL) {
        sscanf(linha, "%d\n", &vetor[i]);
        media += vetor[i];
        i++;
    }   

    media = media / 10;
    maior = vetor[0];
    menor = vetor[0];

    for(i = 0; i < 10; i++) {
        fprintf(saida, "Vetor[%d] = %d\n", i, vetor[i]);

        if(maior < vetor[i])
            maior = vetor[i];

        if(menor > vetor[i])
            menor = vetor[i];

    }

    fprintf(saida, "Maior valor: %d\nMenor valor: %d\n", maior, menor);
    fprintf(saida, "Media dos valores: %.1f\n", media);

    fclose(entrada);
    fclose(saida);

    return(0);
}