#include <stdio.h>
#define MAX 100000

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return;
}

int separa_c(int p, int r, int v[MAX]){
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
        if (i < j)
            troca(&v[i], &v[j]);
        }
    return j;
}

int separa_d(int p, int r, int v[MAX]){
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

void quicksort_c(int p, int r, int v[MAX]){
    int q, aux;
    if (p < r) {
        q = separa_c(p, r, v);
        quicksort_c(p, q, v);
        quicksort_c(q+1, r, v);
    }
}

void quicksort_d(int p, int r, int v[MAX]){
    int q, aux;
    if (p < r) {
        q = separa_d(p, r, v);
        quicksort_d(p, q, v);
        quicksort_d(q+1, r, v);
    }
}


int main(){
    int n, valor, indice_par, indice_impar;
    int pares[MAX], impares[MAX];
    indice_par = 0;
    indice_impar = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%d", &valor);
        if (valor % 2 == 0){
            pares[indice_par] = valor;
            indice_par += 1;
        }
        else{
            impares[indice_impar] = valor;
            indice_impar += 1;
        }
    }

    quicksort_c(0, indice_par - 1, pares);
    quicksort_d(0, indice_impar - 1, impares);

    for (int i = 0; i < indice_par; i++){
        printf("%d\n", pares[i]);
    }

    for (int i = 0; i < indice_impar; i++){
        printf("%d\n", impares[i]);
    }

    return 0;
}