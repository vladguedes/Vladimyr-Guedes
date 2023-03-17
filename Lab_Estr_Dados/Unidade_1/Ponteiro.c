#include <stdio.h>

int main(void) {
    int x = 100;
    int* p;
    p = &x;
    printf("%p\n%d", p, *p);
    return(0);
}