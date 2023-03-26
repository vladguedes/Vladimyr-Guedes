#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct questoes { //estrutura contendo os gabaritos das questoes
    char gabarito[2];
}Questoes;

typedef struct alunos { //estrutura contendo os dados dos alunos, suas respostas e suas notas
    char nome[50];
    char resposta[2];
    float nota;
}Alunos;

int main(void) {
    int qnt_questoes;
    int i, j;
    int compara_resposta;
    float aprovados = 0;

    Questoes *p = (Questoes*) malloc(sizeof(Questoes)); //alocando dinamicamente minha variável p
    Alunos *a = (Alunos*) malloc(10 * sizeof(Alunos)); //aocando dinamicamente minha variável a
 
    printf("Digite a quantidade de questoes: ");
    scanf("%d", &qnt_questoes);

    for(i = 0; i < 10; i++) {

        a[i].nota = 0.0; //aqui está inicializando as notas dos alunos com 0

    }
    
    for(i = 0; i < qnt_questoes; i++) {

        printf("Digite o gabarito da questao %d: ", i + 1);//aqui o usuário digita o gabarito de cada questão
        scanf(" %[^\n]c", p[i].gabarito);

    }

    for(i = 0; i < 10; i++) {

        printf("Digite o nome do aluno %d: ", i + 1);//aqui é digitado o nome dos 10 alunos
        scanf(" %[^\n]c", a[i].nome);

    }

    for(i = 0; i < 10; i++) {//esse primeiro for é para cada aluno

        printf("\n==============================\n");
        printf("\n\nAlunos Num.%d\n%s", i + 1, a[i].nome);

        for(j = 0; j < qnt_questoes; j++) {//esse segundo for é para cada resposta de cada aluno

            printf("\nQuestao %d: ", j + 1);
            scanf(" %[^\n]c", a[i].resposta);

            compara_resposta = strcmp(a[i].resposta, p[j].gabarito);//aqui está comparando a resposta do aluno com o gabarito

            if(compara_resposta == 0) {

                printf("\nCerto!\n");

                a[i].nota += (10.0 / qnt_questoes);//aqui está dividindo a nota total da prova pela quantidade de questoes e atribuindo essas notas para a variável nota de cada aluno

            }

            else {
                
                printf("\nErrado!\n");

            }

            compara_resposta = 1;//aqui está resetando a variável de comparação para 1

        }

    }

    for(i = 0; i < 10; i++) {
        
        printf("\n========================\n");
        printf("\nAluno: %s\nNota: %.1f\n", a[i].nome, a[i].nota); //aqui estou printando a nota do aluno e se ele foi aprovado ou não

        if(a[i].nota >= 6.0) {

            printf("\nAprovado!\n");
            aprovados += 1.0;

        }

        else {

            printf("\nReprovado\n");
            
        }

    }

    printf("\n\nPorcentagem de alunos aprovados: %.0f%%\n", (aprovados / 10.0) * 100.0);//aqui é a porcentagem de alunos aprovados

    free(a);//aqui estou liberando a minha memória
    free(p);

    return(0);
}