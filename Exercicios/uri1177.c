#include <stdio.h>
#define MAX 1000

int main(){
    int t, i, c;
    int v[MAX];
    scanf("%d", &t);
    for (i = 0, c = 0; i < MAX; i++){
        v[i] = c;
        printf("N[%d] = %d\n", i, c);
        c += 1;
        if (c == t)
            c = 0;     
    }
    return 0;
}   