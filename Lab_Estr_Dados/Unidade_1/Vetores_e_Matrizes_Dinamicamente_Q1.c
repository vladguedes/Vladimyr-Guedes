#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j;
    int linhas = 3;
    int colunas = 3;    
    float **matriz = (float**) malloc(linhas * sizeof(float*));
    int linha;
    
    for(linha = 0; linha < linhas; linha++){
        matriz[linha] = (float*) malloc(colunas * sizeof(float));
    }
    printf("Digite os valores para matriz.\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("Matriz[%d][%d]:", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    printf("===============\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(j == 0){
                printf("\n%.0f\t", matriz[i][j]);
            }
            else{
                printf("%.0f\t", matriz[i][j]);
            }
        }
    }
    for(linha = 0; linha < linhas; linha++){
        free(matriz[linha]);
    }
    free(matriz);
    
    return(0);
}