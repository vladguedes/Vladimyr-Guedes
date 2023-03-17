#include <stdio.h>

int main() {
    int a, n, i, t = 0;
    scanf("%d", &a);
    do{
        scanf("%d", &n);
    }
    while(n <= 0);
    for(i = 0; i <= n - 1; i++){
        t = t + (a + i);
    }
    printf("%d\n", t);
    return(0);
}