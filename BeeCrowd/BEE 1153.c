#include <stdio.h>

int main() {
    int x, i, t = 1;
    scanf("%d", &x);
    for(i = x; i >= 1; i--){
        t = t * i;
    }
    printf("%d\n", t);
    return(0);
}