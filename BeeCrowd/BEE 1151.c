#include <stdio.h>

int main() {
    int n, i, vetor[45];
    scanf("%d", &n);
    vetor[0] = 0;
    vetor[1] = 1;
    printf("%d %d ", vetor[0], vetor[1]);
    for(i = 2; i < n; i++){
        vetor[i] = vetor[i - 1] + vetor[i - 2];
        if(i == n - 1){
        }
        else{
        printf("%d ", vetor[i]);
        }
    }
    printf("%d\n", vetor[n - 1]);
    return(0);
}