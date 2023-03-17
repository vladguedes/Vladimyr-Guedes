#include <stdio.h>

int main() {
    int x, y, i;
    scanf("%d", &x);
    for(i = 2; i <= x; i++){
        if(i % 2 == 0){
            y = i * i;
            printf("%d^2 = %d\n", i, y);
        }
    }
    return(0);
}