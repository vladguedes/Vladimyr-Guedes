#include <stdio.h>

int main() {
    int x, y, z = 0, i;
    scanf("%d %d", &x, &y);
    if(x >= y){
        for(i = x - 1; i > y; i--){
            if(i % 2 != 0){
                z = z + i;
            }
        }
    }
    if(y >= x){
        for(i = y - 1; i > x; i--){
            if(i % 2 != 0){
                z = z + i;
            }
        }
    }
    printf("%d\n", z);
    return(0);
}