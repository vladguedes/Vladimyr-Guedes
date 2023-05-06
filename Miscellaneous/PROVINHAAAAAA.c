#include <stdio.h>

int funcao(int a, int b) {
    while((a > 0) && (b > 0)) {
        if(a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return(a + b);
}

int main() {
    int resposta;
    resposta = funcao(36, 12);

    printf("%d", resposta);

    return(0);
}