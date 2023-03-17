#include <stdio.h>

int main() {
    int i;
    for(i = 0; i < 50; i += 2){
        printf("%d, ", i);
    }
    printf("50.");
    return(0);
}