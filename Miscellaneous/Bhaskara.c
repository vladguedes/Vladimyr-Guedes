#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c, delta, x1, x2;
    printf("Digite o valor de \"A\": ");
    scanf("%d", &a);
    printf("\nDigite o valor de \"B\": ");
    scanf("%d", &b);
    printf("\nDigite o valor de \"C\": ");
    scanf("%d", &c);
    delta = pow(b, 2) - (4 * a * c);
    printf("\nO valor de delta eh %d", delta);
    if(delta < 0){
        printf("\nSeu valor eh vazio, pois seu delta eh negativo");
    }
    else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nO valor de x' eh %d\nE o valor de x\" eh %d", x1, x2);
    }
    return(0);
}