#include <stdio.h>
#include <stdlib.h>
struct reg {
    int conteudo;
    struct reg *prox;
};

typedef struct reg celula;

void imprimeLista(celula *inicio) {
    celula *atual = inicio;
    while (atual != NULL) {
        printf("%d\n", atual->conteudo);
        atual = atual->prox;
    }
}

void removeLista(celula **inicio) {
    celula *atual = *inicio;
    celula *prox;
    while (atual != NULL) {
        prox = atual->prox;
        free(atual);
        atual = prox;
    }
    *inicio = NULL;
}

int main() {
    celula *primeira = (celula *)malloc(sizeof(celula));
    celula *segunda = (celula *)malloc(sizeof(celula));
    celula *terceira = (celula *)malloc(sizeof(celula));

    primeira->conteudo = 10;
    segunda->conteudo = 20;
    terceira->conteudo = 30;

    primeira->prox = segunda;
    segunda->prox = terceira;
    terceira->prox = NULL;

    imprimeLista(primeira);

    printf("Memória usada por cada célula: %lu bytes\n", sizeof(celula));

    removeLista(&primeira);

    return 0;
}
