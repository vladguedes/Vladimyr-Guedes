#include <stdio.h>
#include <stdlib.h>
#include "lista.c"

int main() {
    Lista* l;
    Lista* p;
    Lista* h;
    int s;
    l = cria_lst();
    p = cria_lst();
    l = insere_lst(l, 23);
    l = insere_lst(l, 45);
    l = insere_lst(l, 56);
    l = insere_lst(l, 78);
    p = insere_lst(p, 100);
    p = insere_lst(p, 200);
    p = insere_lst(p, 5);
    scanf("%d", &s);
    h = ultimo(l);
    printf("Ultimo no eh = %d\n", h->info);
    h = concatena(l, p);
    printf("%d\n\n\n", num_nos(h, s));
    imprime_lst(l);
    printf("==================");
    imprime_lst(p);
    printf("==================");
    imprime_lst(h);
    printf("==================");
    l = retira_lst(l, 78);
    imprime_lst(l);
    l = retira_lst(l, 45);
    imprime_lst(l);
    libera_lst(l);
    libera_lst(p);
    libera_lst(h);
    
    return(0);
}