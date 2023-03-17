#include <stdio.h>

int main() {
    int i;
    float s = 1, d = 2;
    for(i = 3; i <= 39; i = i + 2){
        s = s + (i / d);
        d = d * 2;
    }
    printf("%.2f\n", s);
    return(0);
}