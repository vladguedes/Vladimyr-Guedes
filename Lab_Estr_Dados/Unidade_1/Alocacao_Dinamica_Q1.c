#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int num_pessoas, i, sexo_m = 0, sexo_f = 0, gosto_m = 0, gosto_f = 0;
    int *respostas_sexo, *respostas_gosto;
    float media_m, media_f;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &num_pessoas);

    respostas_sexo = (int*) malloc(num_pessoas * sizeof(int));
    respostas_gosto = (int*) malloc(num_pessoas * sizeof(int));

    if((respostas_gosto == NULL) || (respostas_sexo == NULL)) {

        printf("\nERRO!\n");
        exit(1);

    }

    for(i = 0; i < num_pessoas; i++) {

        printf("\nDigite seu sexo.\n1 - Masculino e 2 - Feminino: ");
        scanf("%d", &respostas_sexo[i]);

        printf("\nVoce gostou do produto?\nDigite 1 - Sim e 2 - Nao: ");
        scanf("%d", &respostas_gosto[i]);

        if(respostas_sexo[i] == 1) {

            sexo_m++;

            if(respostas_gosto[i] == 1) {

                gosto_m++;

            }

            else {

            }

        }

        else {

            sexo_f++;

            if(respostas_gosto[i] == 1) {

                gosto_f++;

            }

            else {

            }

        }

    }

    media_m = (float)((sexo_m - gosto_m) / (float)num_pessoas) * 100.0;
    media_f = (float)(gosto_f / (float)num_pessoas) * 100.0;

    printf("\nPorcentagem de pessoas do sexo feminino que gostaram do produto foi de %%%.0f.", media_f);
    printf("\nPorcentagem de pessoas do sexo masculino que nao gostaram do produto foi de %%%.0f.", media_m);

    free(respostas_sexo);
    free(respostas_gosto);

    return(0);
}