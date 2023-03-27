#include <stdio.h>
#include <string.h>

int main() {
    int x, y, z;
    char f;
    printf("Voce sabe a distancia percorrida com o carro, e o quanto ele gastou?");
    scanf("%s", &f);
    switch(f){
        case 's':
        printf("Digite a distancia percorrida:");
        scanf("%d", &x);
        printf("Digite quanto de gasolina foi gasto:");
        scanf("%d", &y);
        z = x / y;
        printf("A media do seu carro e %dkm/l", z);
        break;
        case 'n':
        printf("Digite a quantidade litros quando voce abasteceu:");
        scanf("%d", &y);
        printf("Digite a distancia percorrida:");
        scanf("%d", &x);
        z = x / y;
        printf("A media do seu carro e %dkm/l", z);
        break;
        default:
            printf("Digite uma resposta como \"sim\" ou \"nao\"");
        break;
    }
    return(0);
}