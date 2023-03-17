#include <stdio.h>

int main(void) {
    int x, y = 5, *p,**pp;
    p = &x;
    pp = &p;
    scanf("%d", p);
    *p = x + y;
    printf("O endereco de X eh %p.\nE seu valor eh %d.\n", p, *p);
    printf("E o endereco do ponteiro eh %p.", pp);
    return(0);
}