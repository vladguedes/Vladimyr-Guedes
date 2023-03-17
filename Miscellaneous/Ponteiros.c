#include <stdio.h>

int main() {
    //! showMemory(start=65520, cursos=[a, b, x])
    int a, b, x = 1;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    printf("Digite dois valores:");
    scanf("%d %d", pa, pb);
    x += a + b;
    printf("X = %d", x);
    return(0);
}