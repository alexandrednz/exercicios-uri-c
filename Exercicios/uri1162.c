#include <stdio.h>
#define MAX 50

int main(){
    int n, i, j, k;
    int tamanho, aux, swaps;
    int ordem[MAX];
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        swaps = 0;
        scanf("%d", &tamanho);

        for(j = 0; j < tamanho; j++){
            scanf("%d", &ordem[j]);
        }

        for(j = 0; j < tamanho; j++){
            for(k = j+1; k < tamanho; k++){
                if (ordem[j] > ordem[k]){
                    aux = ordem[j];
                    ordem[j] = ordem[k];
                    ordem[k] = aux;
                    swaps++;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", swaps);
    }

    return 0;
}
