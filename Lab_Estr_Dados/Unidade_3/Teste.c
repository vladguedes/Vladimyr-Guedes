#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main() {
    Lista* l;
    l = cria_lst();
    l = insere_lst(l, 23);
    l = insere_lst(l, 45);
    l = insere_lst(l, 56);
    l = insere_lst(l, 78);
    imprime_lst(l);
    l = retira_lst(l, 78);
    imprime_lst(l);
    l = retira_lst(l, 45);
    imprime_lst(l);
    libera_lst(l);
    return(0);
}