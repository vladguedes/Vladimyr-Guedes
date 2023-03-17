#include <stdio.h>

int main() {
    int w = 0, x, y, z = 0, i;
    scanf("%d %d", &x, &y);
    if(x > y){
        for(i = y; i <= x; i++){
            if(i % 13 != 0){
                z = z + i;
            }
        }
    }
    if(y > x){
        for(i = x; i <= y; i++){
            if(i % 13 != 0){
                w = w + i;
            }
        }
    }
    printf("%d\n", w + z);
    return(0);
}