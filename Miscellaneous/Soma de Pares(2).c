#include <stdio.h>

int main() {
    int x = 0, i;
    for(i = 0; i <= 100; i++){
        if(i % 2 == 0){
            x += i;
        }
    }
    printf("%d", x);
    return(0);
}