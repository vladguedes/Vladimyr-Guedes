#include <stdio.h>

void media();

int main() {
    int t;
    do{
        media();
        do{
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &t);
            if(t == 1){
                media();
            }
        }
        while(t != 2);
    }
    while(t != 2);
    return(0);
}

void media() {
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
}