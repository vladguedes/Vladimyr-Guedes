#include <stdio.h>

int main() {
    int x, y, i, t = 0;
    scanf("%d %d", &x, &y);
    if(x == y){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    if(x > y){
        for(i = x; i < 24; i++){
            t = t + 1;
        }
        t = t + y;
        printf("O JOGO DUROU %d HORA(S)\n", t);
    }
    if(y > x){
        for(i = y; i > 0; i--){
            t = t + 1;
        }
        t = t - x;
        printf("O JOGO DUROU %d HORA(S)\n", t);    
    }
    return(0);
}