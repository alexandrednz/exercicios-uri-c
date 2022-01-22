#include <stdio.h>

int main() {
    int x, y;
    int cont = 0;
    scanf("%d %d", &x, &y);
    for (int i = 1; i <= y; i++) {
        if (cont != x - 1) {
            printf("%d ", i);
            cont += 1;
        }
        else if (cont == x - 1) {
            printf("%d\n", i);
            cont = 0;
        }
    }
    return 0;
}