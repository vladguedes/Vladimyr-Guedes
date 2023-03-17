#include <stdio.h>

int main() {
    int x[5], y = 0, i;
    for(i = 0; i < 5; i++){
        scanf("%d", &x[i]);
        if(x[i] % 2 == 0){
            y++;
        }
    }
    printf("%d valores pares\n", y);
    return(0);
}