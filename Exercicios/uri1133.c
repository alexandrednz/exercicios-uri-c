#include <stdio.h>

int maior(int x, int y) {
    int maior;
    if (x >= y)
        maior = x;
    else
        maior = y;
    
    return maior;
}

int menor(int x, int y) {
    int menor;
    if (x <= y)
        menor = x;
    else
        menor = y;
    
    return menor;
}

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    for (int i = menor(x, y) + 1; i < maior(x, y); i++) {
        if (i % 5 == 2 || i % 5 == 3)
            printf("%d\n", i); 
    }

    return 0;
}