#include <stdio.h>

int main () {
    int i, n;
    char classe;
    char nome[100];

    int anoes, elfos, humanos, magos, hobbits;
    anoes = elfos = humanos = magos = hobbits = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %c", nome, &classe);
        if (classe == 'A')
            anoes += 1;
        if (classe == 'E')
            elfos += 1;
        if (classe == 'H')
            humanos += 1;
        if (classe == 'M')
            magos += 1;
        if (classe == 'X')
            hobbits += 1;
    }

    printf("%d Hobbit(s)\n", hobbits);
    printf("%d Humano(s)\n", humanos);
    printf("%d Elfo(s)\n", elfos);
    printf("%d Anao(s)\n", anoes);
    printf("%d Mago(s)\n", magos);

    return 0;
}