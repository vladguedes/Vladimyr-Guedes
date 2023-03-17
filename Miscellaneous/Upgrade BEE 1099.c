#include <stdio.h>

int main() {
    int n, i, x, y, ii;
    int z = 0;
    scanf("%d", &n);
    for(ii = 0; ii < n; ii++){
        scanf("%d %d", &x, &y);
        if( x == y){
            printf("0\n");
        }
        if(x > y){
            for(i = x - 1; i > y; i--){
                if(i % 2 != 0){
                    z = z + i;
                }
            }
            printf("%d\n", z);
            z = 0;
        }
        if(y > x){
            for(i = y - 1; i > x; i--){
                if(i % 2 != 0){
                    z = z + i;
                }
            }
            printf("%d\n", z);
            z = 0;
        }
    }
    return(0);
}