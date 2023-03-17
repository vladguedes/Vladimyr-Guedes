#include <stdio.h>

int main() {
    int i, o;
    for(o = 1; o <= 9; o = o + 2){
        for(i = 7; i >= 5; i--){
            printf("I=%d J=%d\n", o, i);
        }
    }
    return(0);
}