#include <stdio.h>

int main() {
    int x, z = 0;
    float y = 0;
    scanf("%d", &x);
    do{
        y = y + x;
        z++;
        scanf("%d", &x);
    }
    while(x >= 0);
    printf("%.2f\n", y / (z / 1.0));
    return(0);
}