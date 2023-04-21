
typedef struct lista Lista;
Lista* cria_lst(void);
Lista* insere_lst(Lista * l, int i);
void imprime_lst(Lista* l);
void lst_vazia(Lista* l);
Lista* busca_lst(Lista* l, int v);
Lista* retira_lst(Lista* l, int v);
void libera_lst(Lista* l);
int num_nos(Lista* l, int n);
Lista* ultimo(Lista* l);
Lista* concatena(Lista* l, Lista* p);