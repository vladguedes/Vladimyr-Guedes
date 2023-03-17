#include <stdio.h>

int main() {
    int i, o;
    for(o = 1; o <= 9; o = o + 2){
        if(o == 1){
            for(i = 7; i >= 5; i--){
                printf("I=%d J=%d\n", o, i);
            }
        }
        if(o == 3){
            for(i = 9; i >= 7; i--){
                printf("I=%d J=%d\n", o, i);
            }
        }
        if(o == 5){
            for(i = 11; i >= 9; i--){
                printf("I=%d J=%d\n", o, i);
            }
        }
        if(o == 7){
            for(i = 13; i >= 11; i--){
                printf("I=%d J=%d\n", o, i);
            }
        }
        if(o == 9){
            for(i = 15; i >= 13; i--){
                printf("I=%d J=%d\n", o, i);
            }
        }
    }
    return(0);
}