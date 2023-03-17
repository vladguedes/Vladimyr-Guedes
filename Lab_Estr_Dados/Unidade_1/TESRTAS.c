#include <stdio.h>

void inc(int *n){
    (*n)++;
}

int main() {
    int n = 5;
    inc(&n);
    printf("%d", n);
    return(0);
}