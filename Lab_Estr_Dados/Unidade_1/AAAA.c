#include <stdio.h>

void soma(int x, int y){
    x = x + y;
}

void calcula(int x, int y){
    printf("%d", x + y);
}

int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);
    calcula(x, y);
    return(0);
}