#include <stdio.h>

void troca(int *a, int *b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
    return;
}

void bubble_sort(int n, int v[]){
    int i, j;
    for (i = n - 1; i > 0; i--)
        for (j = 0; j < i; j++)
            if (v[j] > v[j+1])
                troca(&v[j], &v[j+1]);
}

int main(){
    int n;
    while (scanf("%d", &n) != EOF){
        int v[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &v[i]);

        bubble_sort(n, v);
        
        for(int i = 0; i < n; i++)
            printf("%04d\n", v[i]);
    }
    return 0;
}