#include <stdio.h>
#include <stdlib.h>

int main(){

    int quantidade_frutas, linha;
    printf("Digite a quantidade de frutas: ");
    scanf("%d",&quantidade_frutas);

    char ** frutas = (char**) malloc(quantidade_frutas*sizeof(char*));
    if (frutas == NULL)
    {
        printf("Erro de memoria");
        exit(1);
    }
    for (linha = 0; linha < quantidade_frutas; linha++)
    {
        frutas[linha] = (char*) malloc(50*sizeof(char));
    }
    
    float * preco = (float*) malloc(quantidade_frutas*sizeof(float));
    if (preco == NULL)
    {
        exit(1);
    }
    
    printf("Informe as frutas e seu valor: \n");

    for (linha = 0; linha < quantidade_frutas; linha++)
    {
        scanf(" %[^\n]s", frutas[linha]);
        scanf("%f", &preco[linha]);
    }
    for (linha = 0; linha < quantidade_frutas; linha++){
        free(frutas[linha]);
    }
    free(frutas);

    return 0;
}