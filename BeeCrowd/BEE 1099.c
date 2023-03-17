#include <stdio.h>

int main() {
    int n, i, x, y, ii;
    int z = 0;
    scanf("%d", &n);
    int total[n];
    for(ii = 0; ii < n; ii++){
        total[ii] = 0;
        scanf("%d %d", &x, &y);
        if(x >= y){
            for(i = x - 1; i > y; i--){ //4   6
                if(i % 2 != 0){
                    z = z + i;
                }
            }
            total[ii] = z;
            z = 0;
        }
        if(y >= x){
            for(i = y - 1; i > x; i--){
                if(i % 2 != 0){
                    z = z + i;
                }
            }
            total[ii] = z;
            z = 0;
        }
    }
    for(ii = 0; ii < n; ii++){
        printf("%d\n", total[ii]);
    }
    return(0);
}