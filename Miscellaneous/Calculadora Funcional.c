#include <stdio.h>
#include <math.h>

float soma(float *px, float *py);
float sub(float *px, float *py);
float mult(float *px, float *py);
float div(float *px, float *py);
float expo(float *px, float *py);
float raiz(float *px);

int main() {
    float x, y, *px = &x, *py = &y, resp;
    int escolha;
    char v;
    printf("O que deseja fazer? Digite '1' para somar, '2' para subtrair, '3' para multi-\nplicar, '4' para dividir, '5' para exponenciacao e '6' para raiz quadrada:");
    scanf("%d", &escolha);
    do{
        switch(escolha){
            case 1:
            resp = soma(px, py);
            px = &x;
            py = &y;
            printf("A soma de %.0f + %.0f = %.0f\n", x, y, resp);
            break;
            case 2:
            resp = sub(px, py);
            printf("A subtracao de %.0f - %.0f = %.0f\n", x, y, resp);
            break;
            case 3:
            resp = mult(px, py);
            printf("A multiplicacao de %.0f x %.0f = %.0f\n", x, y, resp);
            break;
            case 4:
            resp = div(px, py);
            printf("A divisao de %.0f / %.0f = %.0f\n", x, y, resp);
            break;
            case 5:
            resp = expo(px, py);
            printf("A exponenciacao de %.0f elevado a %.0f = %.0f\n", x, y, resp);
            break;
            case 6:
            resp = raiz(px);
            printf("A raiz quadrada de %.0f = %.0f\n", x, resp);
            break;
            default:
            printf("Digite um valor valido:");
        }
        printf("Deseja repetir?");
        scanf(" %c", &v);
        if(v == 's'){
            printf("Digite qual operacao deseja fazer:");
            scanf("%d", &escolha);
        }
    }
    while(v != 'n');
}

float soma(float *px, float *py) {
    float n;
    printf("Digite dois valores para somar:");
    scanf("%f %f", px, py);
    n = *px + *py;
    return(n);
}

float sub(float *px, float *py) {
    float n;
    printf("Digite dois valores para subtrair:");
    scanf("%f %f", px, py);
    n = *px - *py;
    return(n);
}

float mult(float *px, float *py) {
    float n;
    printf("Digite dois valores para muitiplicar:");
    scanf("%f %f", px, py);
    n = *px * *py;
    return(n);
}

float div(float *px, float *py) {
    float n;
    printf("Digite o numerador:");
    scanf("%f", px);
    printf("Digite o denominador:");
    scanf("%f", py);
    n = *px / *py;
    return(n);
}

float expo(float *px, float *py) {
    float n;
    printf("Digite a base:");
    scanf("%f", px);
    printf("Digite o expoente:");
    scanf("%f", py);
    n = pow(*px, *py);
    return(n);
}

float raiz(float *px) {
    float n;
    printf("Digite um valor para tirar a raiz:");
    scanf("%f", px);
    n = sqrt(*px);
    return(n);
}