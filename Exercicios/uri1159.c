#include <stdio.h>

int main() {
    int x, soma;
    scanf("%d", &x);

    while(x != 0) {
        soma = 0;
        for (int i = x; i <= x + 9; i++) {
            if (i % 2 == 0)
                soma += i;
        }
        printf("%d\n", soma);
        scanf("%d", &x);
    }

    return 0;
}