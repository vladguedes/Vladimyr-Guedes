#include <stdio.h>

int main() {
    int i, y = 0;
    float x[6];
    for(i = 0; i < 6; i++){
        scanf("%f", &x[i]);
    }
    for(i = 0; i < 6; i++){
        if(x[i] >= 0){
            y++;
        }
    }
    printf("%d valores positivos\n", y);
    return(0);
}