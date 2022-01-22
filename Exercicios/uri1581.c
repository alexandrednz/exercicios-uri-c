#include <stdio.h>
#include <string.h>

#define MAX_STRING 20

int main (){
    int n, k;
    int ingles = 0;
    char nacionalidade_ant[MAX_STRING + 1];
    char nacionalidade_atu[MAX_STRING + 1];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &k);
        scanf("%s", nacionalidade_ant);

        for (int j = 0; j < k - 1; j++) {
            scanf("%s", nacionalidade_atu);
            if (strcmp(nacionalidade_ant, nacionalidade_atu) != 0)
                ingles = 1;

            for (int l = 0; l < MAX_STRING + 1; l++) 
                nacionalidade_ant[l] = nacionalidade_atu[l];                        
        }
        if (ingles == 1)
            printf("ingles\n");
        else
            printf("%s\n", nacionalidade_atu);

        ingles = 0;        
    }
    
    return 0;
}

// Ler n (num de casos de teste) e criar um laço for (int i = 0; i < n; i++)
// Dentro do primeiro laço ler k (num de pessoas na conversa) e criar um outro laço for (int j = 0; j < k; j++)
// Ler k linhas indicando a nacionalidade de cada pessoa na conversa
// Se todas as pessoas possuirem a mesma nacionalidade: imprimir lingua nativa de todos.
// Se a nacionalidade de alguem do grupo divergir: imprimir ingles.