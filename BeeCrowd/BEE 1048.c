#include <stdio.h>

int main() {
    float x;
    scanf("%f", &x);
    if(0.00 < x && x <= 400.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", ((x / 100) * 15) + x, (x / 100) * 15);
    }
    if(400.01 < x && x <= 800.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", ((x / 100) * 12) + x, (x / 100) * 12);
    }
    if(800.01 < x && x <= 1200.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", ((x / 100) * 10) + x, (x / 100) * 10);
    }
    if(1200.01 < x && x <= 2000.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", ((x / 100) * 7) + x, (x / 100) * 7);
    }
    if(x > 2000.00){
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", ((x / 100) * 4) + x, (x / 100) * 4);
    }
    return(0);
}