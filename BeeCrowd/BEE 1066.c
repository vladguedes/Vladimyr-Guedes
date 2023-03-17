#include <stdio.h>

int main() {
    int x[5], pos = 0, neg = 0, par = 0, impar = 0, i;
    for(i = 0; i < 5; i++){
        scanf("%d", &x[i]);
        if(x[i] % 2 == 0){
            par++;
        }
        if(x[i] % 2 != 0){
            impar++;
        }
        if(x[i] < 0){
            neg++;
        }
        if(x[i] > 0){
            pos++;
        }
    }
    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return(0);
}