#include <stdio.h>

int main() {
    int w = 0, x, y, z = 0, i;
    scanf("%d %d", &x, &y);
    for(i = 0; i <= y; i++){
        if(x * i == y){
            z = z + 1;
        }
    }
    if(z == 1){
        printf("Sao Multiplos\n");
    }
    else{
        for(i = 0; i <= x; i++){
            if(y * i == x){
                w = w + 1;
            }
        }
        if(w == 1){
            printf("Sao Multiplos\n");
        }
        else{
            printf("Nao sao Multiplos\n");
        }
    }
    return(0);
}