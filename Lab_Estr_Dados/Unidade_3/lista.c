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
    Lista* pro;
    for(pro = l; pro != NULL; pro = pro->prox)
        printf("info = %d \n", pro->info);
}

void lst_vazia(Lista* l) {
    if(l == NULL)
        exit(1);
}

Lista* busca_lst(Lista* l, int v) {
    Lista* pro;

    for(pro = l; pro != NULL; pro = pro->prox) 
        if(pro->info == v)
            return(pro);

    return(NULL);
}

Lista* retira_lst(Lista* l, int v) {
    Lista* ant = NULL;
    Lista* pro = l;

    while(pro != NULL && pro->info != v) {
        ant = pro;
        pro = pro->prox;
    }

    if(pro == NULL) {
        return(l);  
    }

    if(ant == NULL) {
        l = pro->prox;
    }

    else {
        ant->prox = pro->prox;
    }

    free(pro);

    return(l);
}

void libera_lst(Lista* l) {
    Lista* pro = l;

    while(pro != NULL) {
        Lista* t = pro->prox;
        free(pro);
        pro = t;
    }

}

int num_nos(Lista* l, int n) {
    Lista* pro = l;
    int qnt = 0;

    while(pro != NULL) {

        if(pro->info > n)
            qnt++;

        pro = pro->prox;
    }

    return(qnt);
}

Lista* ultimo(Lista* l) {
    Lista* pro = l;

    while(pro->prox != NULL) 
        pro = pro->prox;
    
    return(pro);
}

Lista* concatena(Lista* l, Lista* p) {
    Lista* g = l;

    while(g != NULL) {
        g = g->prox;

        if(g->prox == NULL) 
            g->prox = p;
    }

    return(g);
}