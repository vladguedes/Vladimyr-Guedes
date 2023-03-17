#include <stdio.h>

int main() {
    int x = 0, i;
    for(i = 0; i < 10; i++){
        x = x + 1;
    }
    x = x + 2;
    printf("%d", x);
    return(0);
}