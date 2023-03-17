#include <stdio.h>

int main() {
    int x = 0;
    do{
        printf("AABBCC\n");
        scanf("%d", &x);
    }
    while(x == 0);
    return(0);
}