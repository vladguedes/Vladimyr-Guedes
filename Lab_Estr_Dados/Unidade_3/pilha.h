typedef struct pilha Pilha;

Pilha* cria_pilha(void);
void push_pilha(Pilha* p, float v);
//float pop_pilha(Pilha* p);
//int pilha_vazia(Pilha* p);
//void libera_pilha(Pilha* p);
void imprime_pilha(Pilha* p);