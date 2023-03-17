#include <stdio.h>

int main() {
    char nome[20];
    int i;
    scanf("%s", nome);
    printf("Seu nome eh ");
    for(i = 0; nome[i] != '\0'; i++){
        printf("%c", nome[i]);
    }
    return(0);
}