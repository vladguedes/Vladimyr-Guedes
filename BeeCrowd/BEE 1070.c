#include <stdio.h>

int main() {
    int x, i, y;
    scanf("%d", &x);
    y = x + 12;
    for(i = x; i < y; i++){
        if(i % 2 != 0){
            printf("%d\n", i);
        }
    }
    return(0);
}