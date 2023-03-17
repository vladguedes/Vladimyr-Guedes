#include <stdio.h>

int main() {
    int x, i;
    printf("Digite o Tamanho em Centimetros:");
    scanf("%d", &x);
    printf("    ____________            ____________ \n");
    printf("   |            |          |            |\n");
    printf("   |            |          |            |\n");
    printf("   |            |          |            |\n");
    printf("   |            |          |            |\n");
    printf("   |____________|          |____________|\n");
    for(i = 0; i <= x; i++){
        printf("                |          |\n");
    }
    printf("                |          |\n");
    printf("                |          |\n");
    printf("               _|          |_\n");
    printf("              |              |\n");
    printf("              \\              /\n ");
    printf("              \\            /  \n");
    printf("                \\          /     \n");
    printf("                 \\        /  \n");
    printf("                  \\      /\n");
    printf("                   \\    /\n");
    printf("                    \\__/\n");
    return(0);
}