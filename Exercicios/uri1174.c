#include <stdio.h>
#define MAX 100

int main(){
    double v[MAX];
    for (int i = 0; i < MAX; i++)
        scanf("%lf", &v[i]);
    for (int i = 0; i < MAX; i++)
        if (v[i] <= 10)
            printf("A[%d] = %.1lf\n", i, v[i]);
    return 0;
}