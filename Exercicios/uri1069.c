#include <stdio.h>
#include <stdlib.h>

typedef struct cel{
    char letra;
    struct cel *prox;
} celula;

void apagar_lista(celula *lst){
    celula *aux;

    while(lst != NULL){
        aux = lst;
        lst = lst -> prox;
        free(aux);
    }
}

int main(){
    int n;
    char particula;
    celula *lst, *p;

    // Criando lista encadeada com cabeça
    lst = p = (celula *) malloc(sizeof(celula));
    p->prox = NULL;

    //Repetir para n casos de teste
    scanf("%d%*c", &n);
    for(int i = 0; i < n; i++){
        //Resetando o ponteiro e a particula
        p = lst;
        particula = ' ';
        // Limpando buffer do teclado
       // setbuf(stdin, NULL);

        //Ler e armazenar todas as particulas de diamante na lista
        while (particula != '\n'){
            scanf("%c", &particula);
            if (particula != '.'){
                p->prox = (celula *) malloc(sizeof(celula));
                p = p->prox;
                p->letra = particula;
                p->prox = NULL;
            }
        }

        //Voltando p ao inicio da lista
        p = lst->prox;

        int aberto = 0; // Representa os diamantes em que foi encontrada a primeira metade
        int fechado = 0; // Representa o total de diamantes fechados
        while(p != NULL){
            if (p->letra == '<'){
                aberto++;
            }
            if(p->letra == '>' && aberto > 0){
                fechado++;
                aberto--;            
            }
            p = p->prox;
        }

        //Imprimindo o total de diamantes
        printf("%d\n", fechado);
        
        // Apagando a lista: preparação para o proximo loop
        apagar_lista(lst->prox);       
    }

    return 0;
}