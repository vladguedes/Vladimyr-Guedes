#include <stdio.h>

int main() {
    int m, n, i, soma = 0, c;
    scanf("%d %d", &m, &n);
    if(n > m){
        c = m;
        m = n;
        n = c;
    }
    while(m > 0 && n > 0){
        for(i = n; i <= m; i++){
            printf("%d ", i);
            soma = soma + i;
        }
        printf("Sum=%d\n", soma);
        scanf("%d %d", &m, &n);
        if(n > m){
            c = m;
            m = n;
            n = c;
        }
        soma = 0;
    }
    return(0);
}