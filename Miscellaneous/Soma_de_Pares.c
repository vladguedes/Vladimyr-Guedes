#include <stdio.h>

int main() {
    int i, x = 0;
    for(i = 2; i <= 500; i += 2){
        x += i;
    }
    printf("%d\n", x);
    return(0);
}