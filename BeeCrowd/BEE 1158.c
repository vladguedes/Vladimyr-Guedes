#include <stdio.h>

int main() {
    int n, x, y, i, o, p = 0, t = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        scanf("%d %d", &x, &y);
        p = x + y * 2;
        for(o = x; o < p; o++){
            if(o % 2 != 0){
                t = t + o;
            }
        }
        printf("%d\n", t);
        t = 0;
        p = 0;
    }
    return(0);
}