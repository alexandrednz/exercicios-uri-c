#include <stdio.h>
#include <stdlib.h>
#define MAX 300

typedef struct cel {
    char chave;
    struct cel *prox;
} celula;

void empilha(char y, celula *t) {
    printf("--->empilha");
    celula *nova;
    nova = (celula *) malloc(sizeof (celula));
    nova->chave = y;
    nova->prox = t->prox;
    t->prox = nova;
}

void desempilha(celula *t){
    printf("--->desempilha");
    celula *p;
    if (t->prox != NULL) {
        p = t->prox;
        t->prox = p->prox;
        free(p);
    }
    else {
        printf("Pilha vazia!\n");
    }
}

int main(){
    char base;

    celula *t;
    t = (celula *) malloc(sizeof (celula));
    t->prox = NULL;

    int ligacoes = 0;

    while (scanf("%c", &base) != EOF){

        if (base == '\n'){
            printf("%d\n", ligacoes);
            ligacoes = 0;
            while (t->prox != NULL){
                desempilha(t);
            }
        }
        else if (t->prox == NULL){
            empilha(base, t);

        }
        else if(t->prox != NULL){
            if (base == 'B'){
                if(t->prox->chave == 'S'){
                    desempilha(t);
                    ligacoes++;
                }
                else{
                    empilha(base, t);
                }
            }
            else if(base == 'S'){
                if(t->prox->chave == 'B'){
                    desempilha(t);
                    ligacoes++;
                }
                else{
                    empilha(base, t);
                }
            }
            else if(base == 'C'){
                if(t->prox->chave == 'F'){
                    desempilha(t);
                    ligacoes++;
                }
                else{
                    empilha(base, t);
                }
            }
            else if(base == 'F'){
                if(t->prox->chave == 'C'){
                    desempilha(t);
                    ligacoes++;
                }
                else{
                    empilha(base, t);
                }
            }
        }
    }

}