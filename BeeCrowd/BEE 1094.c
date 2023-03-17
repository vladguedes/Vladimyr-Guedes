#include <stdio.h>

int main() {
    int n, total, i;
    float quant, quantC = 0, quantS = 0, quantR = 0,  porcentagem[3];
    char tipo;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%f", &quant);
        scanf(" %c", &tipo);
        switch(tipo){
            case 'C':
            quantC = quantC + quant;
            break;
            case 'S':
            quantS = quantS + quant;
            break;
            case 'R':
            quantR = quantR + quant;
            break;
        }
    }
    total = quantC + quantR + quantS;
    porcentagem[0] = (quantC / total) * 100;
    porcentagem[1] = (quantR / total) * 100;
    porcentagem[2] = (quantS / total) * 100;
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %.0f\n", quantC);
    printf("Total de ratos: %.0f\n", quantR);
    printf("Total de sapos: %.0f\n", quantS);
    printf("Percentual de coelhos: %.2f %%\n", porcentagem[0]);
    printf("Percentual de ratos: %.2f %%\n", porcentagem[1]);
    printf("Percentual de sapos: %.2f %%\n", porcentagem[2]);
    return(0);
}