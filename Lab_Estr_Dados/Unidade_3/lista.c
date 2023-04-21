#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

struct lista {
    int info;
    struct lista* prox;
};

Lista* cria_lst(void) {
    return(NULL);
}

Lista* insere_lst(Lista* l, int i) {
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return(novo);
}

void imprime_lst(Lista* l) {
    Lista* p;
    for(p = l; p != NULL; p = p->prox)
        printf("info = %d \n", p->info);
}

int lst_vazia(Lista* l) {
    if(l == NULL)
        return(1);
    else
        return(0);
}

Lista* busca_lst(Lista* l, int v) {
    Lista* p;

    for(p = l; p != NULL; p = p->prox) {

        if(p->info == v)
            return(p);

    }

    return(NULL);
}

Lista* retira_lst(Lista* l, int v) {
    Lista* ant = NULL;
    Lista* p = l;

    while(p != NULL && p->info != v) {
        ant = p;
        p = p->prox;
    }

    if(p == NULL) {
        return(l);  
    }

    if(ant == NULL) {
        l = p->prox;
    }

    else {
        ant->prox = p->prox;
    }

    free(p);

    return(l);
}

void libera_lst(Lista* l) {
    Lista* p = l;

    while(p != NULL) {
        Lista* t = p->prox;
        free(p);
        p = t;
    }

}

int num_nos(Lista* l, int n) {
    Lista* p = l;
    int qnt = 0;

    while(p != NULL) {

        if(p->info > n)
            qnt++;

        p = p->prox;
    }

    return(qnt);
}

Lista* ultimo(Lista* l) {
    Lista* p = l;

    while(p->prox != NULL) 
        p = p->prox;
    
    return(p);
}