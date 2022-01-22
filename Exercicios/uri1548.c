#include <stdio.h>
#define MAX 1000

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return;
}

int separa(int p, int r, int v[MAX]){
    int x, i, j;
    x = v[p];
    i = p - 1;
    j = r + 1;
    while (i < j) {
        do {
            j--;
        } while (v[j] < x);
        do {
            i++;
        } while (v[i] > x);
        if (i < j)
            troca(&v[i], &v[j]);
        }
    return j;
}

void quicksort(int p, int r, int v[MAX]){
    int q, aux;
    if (p < r) {
        q = separa(p, r, v);
        quicksort(p, q, v);
        quicksort(q+1, r, v);
    }
}

int main(){
    int n;
    int alunos, cont;
    int notas[MAX], notasOrdenadas[MAX];
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &alunos);
        cont = 0;

        for (int j = 0; j < alunos; j++){
            scanf(" %d", &notas[j]);
            notasOrdenadas[j] = notas[j];
        }

        quicksort(0, alunos - 1, notasOrdenadas);

        for (int j = 0; j < alunos; j++){
            if (notas[j] == notasOrdenadas[j]){
                cont++;
            }
        }

        printf("%d\n", cont);
    }

    return 0;
}