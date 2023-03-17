#include <stdio.h>

int main(void) {
    int i;
    for(i = 0; i < 10; i = i + 2){
        printf("%d", i);
    }
    return(0);
}