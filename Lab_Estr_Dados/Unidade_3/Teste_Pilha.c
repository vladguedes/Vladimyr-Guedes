#include <stdio.h>
#include <stdlib.h>
#include "pilha.c"

int main(void) {
    Pilha* p = cria_pilha();
    push_pilha(p, 3);
    push_pilha(p, 10);
    push_pilha(p, 8);
    push_pilha(p, 2);
    push_pilha(p, 7);
    push_pilha(p, 4);
    imprime_pilha(p);

    //libera_pilha(Pilha* p);
    free(p);

    return(0);
}