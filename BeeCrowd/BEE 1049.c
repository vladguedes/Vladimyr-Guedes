#include <stdio.h>
#include <string.h>

int main() {
    char nome[20];
    scanf("%s", nome);
    if(nome == "vertebrado"){
        scanf("%s", nome);
        if(nome == "ave"){
            scanf("%s", nome);
            if(nome == "carnivoro"){
                printf("aguia\n");
            }
            if(nome == "onivoro"){
                printf("pomba\n");
            }
        }
        if(nome == "mamifero"){
            scanf("%s", nome);
            if(nome == "onivoro"){
                printf("homem\n");
            }
            if(nome == "herbivoro"){
                printf("vaca\n");
            }
        }
    }
    return(0);
}