#include <stdio.h>
#define MAX 10

int main() {
    int v[MAX];

    for (int i = 0; i < MAX; i++){
        scanf("%d", &v[i]);
        if (v[i] <= 0)
            v[i] = 1;
    }
    for (int i = 0; i < MAX; i++){
        printf("X[%d] = %d\n", i, v[i]);
    }
    return 0;
}