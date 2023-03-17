#include <stdio.h>

int main() {
    int a, b, x;
    int *pa, *pb, *px;
    pa = &a;
    pb = &b;
    px = &x;
    printf("Digite dois valores inteiros:");
    scanf("%d %d", pa, pb);
    x = a + b;
    printf("X = %d", x);
    return(0);
}