#include <stdio.h>

int main() {
    int x, alcool = 0, diesel = 0, gasolina = 0;
    do{
        scanf("%d", &x);
        if(x == 1){
            alcool++;
        }
        if(x == 2){
            gasolina++;
        }
        if(x == 3){
            diesel++;
        }
    }
    while(x != 4);
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return(0);
}