#include <stdio.h>
#include <time.h>
#include <math.h>

void funcao(int n) {

    size_t i, j, k;
        for(i = 0; i < n; i++) {
            //printf("%d \n", i);
            for(j = 0; j < n; j++) {
                //printf("MARCADOR: %d\n", j);
                for(k = 0; k < n; k++) {
                    //printf("MARCADOR: %d\n", k);
                    if(j == 999) {
                        printf("MARCADOR: %d\n", i);
                    }
                }
            }
        }

}

int fib(int n) {
    if(n == 0 || n == 1) {
        return(1);
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    double soma = 0;
    int i;
    for(i = 0; i < 10; i++) {
        clock_t start = clock();
        fib(43);
        clock_t end = clock();
        soma += (double) (end - start);
    }
    printf("TEMPO: %f\n",(double) (soma)/(10*CLOCKS_PER_SEC));
}
