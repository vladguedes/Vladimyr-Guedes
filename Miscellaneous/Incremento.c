#include <stdio.h>

int main(void) {
    int x = 5;
    printf("%d\n", x);
    x = 2 + x + 1;
    printf("%d\n", x);
    printf("%d", x);
    return(0);
}