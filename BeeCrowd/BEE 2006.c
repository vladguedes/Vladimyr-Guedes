#include <stdio.h>

int main() {
    int t, a[5], r = 0, i;
    scanf("%d", &t);
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
        if(a[i] == t){
            r++;
        }
    }
    printf("%d\n", r);
    return(0);
}