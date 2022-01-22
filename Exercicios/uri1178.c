#include <stdio.h>
#define MAX 100

int main(){
    double x;
    scanf("%lf", &x);
    double n[MAX];
    n[0] = x;
    printf("N[0] = %.4lf\n", n[0]);
    for (int i = 1; i < MAX; i++){
        n[i] = n[i-1]/2;
        printf("N[%d] = %.4lf\n", i, n[i]);
    } 
    return 0;
}