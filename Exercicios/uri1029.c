#include <stdio.h>

int fib(int *calls_p, int x){
    if (x == 0){
        *calls_p += 1;
        return 0;
    }
    if (x == 1){
        *calls_p += 1;
        return 1;
    }
    *calls_p += 1;
    return fib(calls_p, x-1) + fib(calls_p, x-2);
}

int main(){
    int n, x, calls, *calls_p;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        calls_p = &calls;
        calls = 0;
        scanf("%d", &x);
        printf("fib(%d) = %d calls = %d\n", x, (calls - 1), fib(calls_p, x));        
    }
    return 0;
}