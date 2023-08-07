#include <stdio.h>
#include <stdlib.h>

#define MAX_VAGAS 10
#define MAX_TURMAS 3

struct aluno {
 int mat;
 char nome[81];
 float notas[3];
 float media;
};
typedef struct aluno Aluno;

struct turma {
 char id; 
 int vagas; 
 Aluno* alunos[MAX_VAGAS];
};
typedef struct turma Turma;

//Turma* turmas[MAX_TURMAS];

Turma* cria_turma(char id, Turma* turma) {
    int i, j;
    for(i = 0; i < MAX_TURMAS; i++) {
        if(turma[i].id == id) {
            printf("Esta turma ja existe!\n");
            break;
        }
        else {
            for(j = 0; j < MAX_VAGAS; j++) {
                Turma* turmas[MAX_TURMAS];
                turmas[i].id = id;
                turmas[i].vagas = 10;
                turmas[i].alunos[j] = NULL; 
            }
        }
    }
    return(turma);
}

void matricula_aluno(Turma* turma, int mat, char* nome) {
    int i, j;
    for(i = 0; i < MAX_TURMAS;) {
        if(turma[i].vagas == 0) {
            i++;
        }
        else {
            printf("Aluno matriculado na turma %c", turma[i].id);
            for(j = 0; j < MAX_VAGAS; j++) {
                if(turma[i].alunos[j] != NULL) {

                }
                else {
                    turma[i]->alunos[j].mat = mat;
                }
            }
        }
    }
}