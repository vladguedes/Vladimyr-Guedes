#include <stdio.h>

int conf(int y) {
    int x;
    x = y * y;
    return(x);
}

int main() {
    int a, b;
    scanf("%d", &a);
    b = conf(a);
    printf("%d", b);
    return(0);
}