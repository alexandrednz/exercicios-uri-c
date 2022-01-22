#include <stdio.h>
#define MAX 10

int main(){
    int v[MAX];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < MAX; i++){
        v[i] = n;
        n = n * 2;
    }
    for (int i = 0; i < MAX; i++){
        printf("N[%d] = %d\n", i, v[i]);
    }
    return 0;
}
