#include <stdio.h>

int main() {
    int x, i;
    float a, b, c;
    scanf("%d", &x);
    for(i = 0; i < x; i++){
        scanf("%f %f %f", &a, &b, &c);
        printf("%.1f\n", (a * 2.0 + b * 3.0 + c * 5.0) / 10.0);
    }
    return(0);
}