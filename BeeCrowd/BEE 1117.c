#include <stdio.h>

int main() {
    int i;
    float x, y;
    for(i = 0; i != 1;){
        scanf("%f", &x);
        if(x >= 0.0 && x <= 10.0){
            i++;
        }
        else{
            printf("nota invalida\n");
        }
    }
    for(i = 0; i != 1;){
        scanf("%f", &y);
        if(y >= 0.0 && y <= 10.0){
            i++;
        }
        else{
            printf("nota invalida\n");
        }
    }
    printf("media = %.2f\n", (x + y) / 2);
    return(0);
}