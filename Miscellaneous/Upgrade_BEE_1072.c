#include <stdio.h>

int main() {
    int n = 0, x[n], i, in = 0, out = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &x[i]);
        if(10 <= x[i] && x[i] <= 20){
            in++;
        }
        else{
            out++;
        }
    }
    printf("%d in\n%d out\n", in, out);
    return(0);
}