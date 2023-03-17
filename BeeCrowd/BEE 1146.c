#include <stdio.h>

int main() {
    int x, i;
    do{
        scanf("%d", &x);
        if(x != 0){
            for(i = 1; i < x; i++){
                printf("%d ", i);
            }
        printf("%d\n", x);
        }
        else{
        }
    }
    while(x != 0);
    return(0);
}