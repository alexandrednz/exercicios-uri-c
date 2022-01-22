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


void soma_x_ao_y(x, y) {
    int soma = 0;
    for (int i = menor(x, y); i <= maior(x, y); i++) {
        printf("%d ", i);
        soma += i;
    }

    printf("Sum=%d\n", soma);

}

int main () {
    int x, y;
    for (int i = 1; i > 0; i = i) {
        scanf("%d %d", &x, &y);
        if (x <= 0 || y <= 0)
            i = 0;
        else
            soma_x_ao_y(x, y);
    }

    return 0;
}