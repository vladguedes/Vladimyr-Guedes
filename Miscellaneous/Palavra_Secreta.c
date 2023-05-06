#include <stdio.h>
#include <string.h>

int main() {
    #define palavra "botafogo"

    char tentativa[10];
    int i, a = 1;

    do {
        printf("\nDigite uma letra: ");
        scanf(" %s", tentativa);

        for(i = 0; i < 8; i++) {
            if(palavra[i] == tentativa[i]) {
                printf("%c", tentativa[i]);
            }
            else {
                printf("#");
            }
        }
    }
    while(a > 0);

    return(0);
}