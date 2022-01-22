#include <stdio.h>
#define MAX 20

int main(){
    int v[MAX];
    int aux;
    for (int i = 0; i < MAX; i++)
        scanf("%d", &v[i]);
    for (int i = 0; i < (MAX/2); i++){
        aux = v[i];
        v[i] = v[(MAX - 1) - i];
        v[(MAX - 1) - i] = aux;
    }
    for (int i = 0; i < MAX; i++)
        printf("N[%d] = %d\n", i, v[i]);
    return 0;
}