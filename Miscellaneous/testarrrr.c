#include <stdio.h>
#include <math.h>

int main() {
    float x[3], maior, meio, menor;
    int i;
    for(i = 0; i < 3; i++){
        scanf("%f", &x[i]);
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
    if(x[0] == x[1] && x[0] == x[2]){
        maior = x[0];
        meio = x[0];
        menor = x[0];
    }
    if(x[0] == x[1] && x[0] > x[2]){
        maior = x[0];
        meio = x[1];
        menor = x[2];
    }
    if(x[0] == x[1] && x[0] < x[2]){
        maior = x[2];
        meio = x[1];
        menor = x[0];
    }
    if(x[0] == x[2] && x[0] > x[1]){
        maior = x[0];
        meio = x[2];
        menor = x[1];
    }
    if(x[0] == x[2] && x[0] < x[1]){
        maior = x[1];
        meio = x[2];
        menor = x[0];
    }
    printf("%.0f, %.0f, %.0f", maior, meio, menor);
    return(0);
}
