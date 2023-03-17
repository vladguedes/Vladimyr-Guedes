#include <stdio.h>

int main() {
    int n, i, o, p = 1, res = 0;
    scanf("%d", &n);
    for(i = 1; i <= (n * 3) + n; i++){
        p++;
        res++;
        if(res == 4){
            res = 0;
            printf("PUM\n");
        }
        for(o = i; o < p; o++){
            if(o % 4 == 0){
            }
            else{
                printf("%d ", o);
            }
        }
    }
    return(0);
}