#include <stdio.h>
#define MAX 100

int main(){
    int  t, n;
    long long int v[MAX];

    scanf("%d", &t);
    for (int i = 0; i < t; i++){
        long long int penultimo = v[0] = 0;
        long long int ultimo = v[1] = 1;
        scanf("%d", &n);
        for (int c = 0; c < n; c++){
            v[c + 2] = penultimo + ultimo;
            penultimo = ultimo;
            ultimo = v[c + 2];
        }
        printf("Fib(%d) = %lld\n", n, v[n]);
    }
    return 0;
}