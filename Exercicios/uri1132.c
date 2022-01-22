#include <stdio.h>

int maior(int x, int y) {
    int maior;
    if (x > y)
        maior = x;
    else
        maior = y;

    return maior;
}

int menor(int x, int y) {
    int menor;
    if (x < y)
        menor = x;
    else
        menor = y;

    return menor;
}

int calcular_soma(int x, int y) {
    int soma;
    soma = 0;
    for (int i = menor(x, y); i <= maior(x, y); i++) {
        if (i % 13 != 0)
            soma += i;
    }

    return soma;
}

int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);

    printf("%d\n", calcular_soma(x, y));

    return 0;
}