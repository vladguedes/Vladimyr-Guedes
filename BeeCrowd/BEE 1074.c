#include <stdio.h>

int main() {
    int y, i = 0;
    scanf("%d", &y);
    for(i = 0; i < y; i++){
        int  x[i];                   //POR ALGUM ACASO O BEECROWD NÃO ACEITOU QUE MEU VETOR "x[i]" FICASSE ACIMA DO "for".
        scanf("%d", &x[i]);
        if(x[i] == 0){
            printf("NULL\n");
        }
        if(x[i] < 0 && x[i] % 2 == 0){
            printf("EVEN NEGATIVE\n");
        }
        if(x[i] > 0 && x[i] % 2 == 0){
            printf("EVEN POSITIVE\n");
        }
        if(x[i] < 0 && x[i] % 2 != 0){
            printf("ODD NEGATIVE\n");
        }
        if(x[i] > 0 && x[i] % 2 != 0){
            printf("ODD POSITIVE\n");
        }
    }
    return(0);
}