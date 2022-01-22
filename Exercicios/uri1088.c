#include <stdio.h>
#define MAX 100000

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return;
}

int separa(int p, int r, int v[MAX], int *a){
    int x, i, j;
    x = v[p];
    i = p - 1;
    j = r + 1;
    while (i < j) {
        do {
            j--;
        } while (v[j] > x);
        do {
            i++;
        } while (v[i] < x);
        if (i < j){
            troca(&v[i], &v[j]);
            *a = *a + 1;
        } 
    }
    return j;
}

void quicksort(int p, int r, int v[MAX], int *a){
    int q;
    if (p < r) {
        q = separa(p, r, v, a);
        quicksort(p, q, v, a);
        quicksort(q+1, r, v, a);
    }
}


int main(){
    int n;
    int v[MAX];

    scanf("%d", &n);

    while (n != 0){  
        int trocas, *a = &trocas;
        *a = 0;     

        for(int i = 0; i < n; i++){
            scanf("%d", &v[i]);
        }

        quicksort(0, n - 1, v, a);

        if(trocas % 2 == 0){
            printf("Carlos\n");
        }
        else{
            printf("Marcelo\n");
        }

        scanf("%d", &n);
    }

    return 0;
}