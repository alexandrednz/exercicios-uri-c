#include <stdio.h>
#include <stdlib.h>
#define MAX 100

typedef struct cel {
    int chave;
    struct cel *prox;
} celula;

void empilhacarta(int y, celula *t) {
    celula *nova;
    nova = (celula *) malloc(sizeof (celula));
    nova->chave = y;
    nova->prox = t->prox;
    t->prox = nova;
}

void desempilhacarta(celula *t, int v[], int *aux) {
    int a, b;
    celula *p;

    if (t->prox != NULL) {
        p = t->prox;
        b = p->chave;
        t->prox = p->prox;
        free(p);

        v[*aux] = b;
        (*aux)++;
        
        a = t->prox->chave;

        celula *w = t, *q = t->prox;
        while (q != NULL) {
            w->chave = q->chave;
            w = q;
            q = q->prox;
        }

        w->chave = a;
    }
}

int main() {
    int n, aux, descartes[MAX];
    scanf("%d", &n);

    while (n != 0) {
        celula *t;
        t = (celula *) malloc(sizeof (celula));
        t->prox = NULL;
        
        aux = 0;

        for (int i = n; i >= 1; i--){
            empilhacarta(i, t);
        }
        
        while (t->prox->prox != NULL){
            desempilhacarta(t, descartes, &aux);
        }

        printf("Discarded cards: ");

        for (int i = 0; i < n - 1; i++) {
            printf("%d", descartes[i]);

            if (i != n - 2) {
                printf(", ");
            }
        }

        printf("\n");

        printf("Remaining card: ");

        for (celula *i = t->prox; i != NULL; i = i->prox) {
            printf("%d\n", i->chave);
        }

        scanf("%d", &n);
    }

    return 0;
}