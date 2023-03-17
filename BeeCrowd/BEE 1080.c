#include <stdio.h>

int main() {
    int x[5], i, maior, pos;
    for(i = 0; i < 5; i++){
        scanf("%d", &x[i]);
    }
    for(i = 0; i < 5; i++){
        if(i == 0){
            maior = x[i];
            pos = i + 1;
        }
        if(x[i] > maior){
            maior = x[i];
            pos = i + 1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", pos);
    return(0);
}