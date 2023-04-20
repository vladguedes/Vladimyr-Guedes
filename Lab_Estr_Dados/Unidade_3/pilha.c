#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
    int n;
    int vetor[50];
};

Pilha* cria_pilha(void) {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));

    if(p == NULL)
        exit(1);

    p->n = 0;
    
    return(p);
}

void push_pilha(Pilha* p, float v) {
    if(p->n == 50) {
        printf("Capacidade Maxima!");
        exit(1);
    }

    p->vetor[p->n] = v;
    p->n++;

}

 float pop_pilha(Pilha* p){
     float v;
     if(pilha_vazia(p)) {
         printf("Pilha vazia!\n");
     }

     v = p->vetor[p->n-1];
     p->n--;

     return(v);
 }

void imprime_pilha(Pilha* p) {
    int i;
    for(i = 0; i < p-> n; i++) {
        printf("vetor[%d] = %d\n", i, p->vetor[i]);
    }
}