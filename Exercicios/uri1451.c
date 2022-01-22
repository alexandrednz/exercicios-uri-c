#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    char letra;
    struct cel *prox;
} celula;

void limpa_lista(celula *lst){
    celula *aux;

    while(lst != NULL){
        aux = lst;
        lst = lst -> prox;
        free(aux);
    }
}

void imprime_lista(celula *lst){
    celula *p;
    for (p = lst; p != NULL; p = p->prox)
        printf("%c", p->letra);
    limpa_lista(lst);
}


int main(){
    celula *lst, *fim, *cursor, *aux;
    char l;

    lst = fim = cursor = (celula *) malloc(sizeof(celula));
    cursor->prox = NULL;

    while(scanf("%c", &l) == 1){
        if (l == '['){
            cursor = lst;
        }

        else if (l == ']'){
            cursor = fim;
        }

        else if(l == '\n'){
            imprime_lista(lst->prox);
            cursor = fim = lst;
            cursor->prox = NULL;
            printf("\n");
        }
        else{
            aux = cursor->prox;
            cursor->prox = (celula *) malloc(sizeof(celula));

            if(fim == cursor){
                fim = cursor->prox;
            }

            cursor = cursor->prox;
            cursor->letra = l;
            cursor->prox = aux;
        }
    }
    return 0;
}