#include <stdio.h>

int main() {
    int n, i, x, y;
    float r;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d %d", &x, &y);
        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            r = (float) x / y;
            printf("%.1f\n", r);
        }
    }
    return(0);
}