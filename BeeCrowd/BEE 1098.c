#include <stdio.h>

int main() {
    int i, p;
    float o = 0, f = 0;
    printf("I=0 J=1\n");
    printf("I=0 J=2\n");
    printf("I=0 J=3\n");
    for(i = 0; i < 9; i++){
        o = o + 0.2;
        f = f + 0.2;
        if(o == 1){
            printf("I=1 J=2\n");
            printf("I=1 J=3\n");
            printf("I=1 J=4\n");
        }
        else{
            for(p = 1; p <= 3; p++){
            printf("I=%.1f J=%.1f\n", o, p + f);
            }
        }
    }
    printf("I=2 J=3\n");
    printf("I=2 J=4\n");
    printf("I=2 J=5\n");
    return(0);
}