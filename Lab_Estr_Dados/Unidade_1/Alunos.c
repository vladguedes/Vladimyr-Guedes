#include <stdio.h>
#include <stdlib.h>

#define MAX_VAGAS 10;
#define MAX_TURMAS 3;

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

Turma* turmas[MAX_TURMAS];

int main() {
    
}