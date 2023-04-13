
typedef struct lista Lista;
Lista* cria_lst(void);
Lista* insere_lst(Lista * l, int i);
void imprime_lst(Lista* l);
int lst_vazia(Lista* l);
Lista* lst_busca(Lista* l, int v);
Lista* retira_lst(Lista* l, int v);
void libera_lst(Lista* l);