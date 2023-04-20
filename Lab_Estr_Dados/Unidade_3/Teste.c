#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main() {
    Lista* l;
    int s;
    l = cria_lst();
    l = insere_lst(l, 23);
    l = insere_lst(l, 45);
    l = insere_lst(l, 56);
    l = insere_lst(l, 78);
    scanf("%d", &s);
    printf("%d\n\n\n", num_nos(l, s));
    Lista* p;
    p = ultimo(l);
    printf("Ultimo no eh = %d\n", p->info);
    imprime_lst(l);
    l = retira_lst(l, 78);
    imprime_lst(l);
    l = retira_lst(l, 45);
    imprime_lst(l);
    libera_lst(l);
    
    return(0);
}