#include <stdio.h>

int main() {
    int x, y, a, b, i, t = 0, m = 0;
    scanf("%d %d %d %d", &x, &a, &y, &b);
    if(x == y && a == b){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    if(x > y){
        for(i = x; i < 24; i++){
            t = t + 1;
        }
        for(i = a; i < 60; i++){
            m = m + 1;
        }
        t = t + y;
        m = m + b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t, m);
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