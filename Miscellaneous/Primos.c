#include <stdio.h>

int main() {
    int x, y, z = 0, i, o;
    scanf("%d %d", &x, &y);
    for(i = x; i <= y; i++){  //2   7
        for(o = 1; o <= i; o++){
            if(i % o != 0){
                z = z + 0;
            }
            if(i % o == 0){
                z++;
            }
        }
        if(z == 2){
            printf("%d ", i);
        }
        z = 0;
    }
    return(0);
}