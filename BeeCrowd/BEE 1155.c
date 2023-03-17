#include <stdio.h>

int main() {
    int i;
    float x = 1.0, s = 0;
    for(i = 1; i <= 100; i++){
        s = s + (1 / x);
        x++;
    }
    printf("%.2f\n", s);
    return(0);
}