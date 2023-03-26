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
    if(maior >= meio + menor){
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if(pow(maior, 2) == pow(meio, 2) + pow(menor, 2)){
            printf("TRIANGULO RETANGULO\n");
        }
        if(pow(maior, 2) > pow(meio, 2) + pow(menor, 2)){
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(pow(maior, 2) < pow(meio, 2) + pow(menor, 2)){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if(maior == meio && maior == menor){
            printf("TRIANGULO EQUILATERO\n");
        }
        if(maior == meio && maior != menor){
            printf("TRIANGULO ISOSCELES\n");
        }
        if(maior == menor && maior != meio){
            printf("TRIANGULO ISOSCELES\n");
        }
        if(meio == menor && meio != maior){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return(0); 
}
