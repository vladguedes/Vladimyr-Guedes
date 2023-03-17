#include <stdio.h>

int main() {
    int x, i, t = 0;
    scanf("%d", &x);
    while(x != 0){
        if(x % 2 == 0){
            for(i = x; i <= x + 8; i += 2){
                t += i;
            }
        }
        if(x % 2 != 0){
            for(i = x + 1; i <= x + 10; i += 2){
                t += i;
            }
        }
        printf("%d\n", t);
        t = 0;
        scanf("%d", &x);
    }
    return(0);
}