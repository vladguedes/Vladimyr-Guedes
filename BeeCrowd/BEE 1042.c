#include <stdio.h>

int main() {
    int x[3], i;
    int maior, meio, menor;
    for(i = 0; i < 3; i++){
        scanf("%d", &x[i]);
    }
    if(x[0] > x[1] && x[0] > x[2]){
        maior = x[0];
        if(x[1] > x[2]){
            meio = x[1];
            menor = x[2];
        }
        else{
            meio = x[2];
            menor = x[1];
        }
    }
    if(x[0] > x[1] && x[0] < x[2]){
        meio = x[0];
        if(x[2] < x[1]){
            maior = x[1];
            menor = x[2];
        }
        else{
            maior = x[2];
            menor = x[1];
        }
    }
    if(x[0] < x[1] && x[0] > x[2]){
        meio = x[0];
        if(x[2] < x[1]){
            maior = x[1];
            menor = x[2];
        }
        else{
            maior = x[2];
            menor = x[1];
        }
    }
    if(x[0] < x[1] && x[0] < x[2]){
        menor = x[0];
        if(x[1] > x[2]){
            maior = x[1];
            meio = x[2];
        }
            else{
                maior = x[2];
                meio = x[1];
            }
    }
    printf("%d\n%d\n%d\n", menor, meio, maior);
    printf("\n");
    printf("%d\n%d\n%d\n", x[0], x[1], x[2]);
    return(0);
}