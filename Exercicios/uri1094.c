#include <stdio.h>

int main() {

    int n, cobaias, coelhos, ratos, sapos;
    int quantia;
    double percentual_c, percentual_r, percentual_s;
    char tipo;
    cobaias = 0;
    coelhos = 0;
    ratos = 0;
    sapos = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %c", &quantia, &tipo);

        if (tipo == 'C')
            coelhos += quantia;
        else if (tipo == 'R')
            ratos += quantia;
        else if (tipo == 'S')
            sapos += quantia;
        
        cobaias += quantia;
    }

    percentual_c = coelhos * 100 / (cobaias + 0.00);
    percentual_r = ratos * 100 / (cobaias + 0.00);
    percentual_s = sapos * 100 / (cobaias + 0.00);

    printf("Total: %d cobaias\n", cobaias);
    printf("Total de coelhos: %d\n", coelhos);
    printf("Total de ratos: %d\n", ratos);
    printf("Total de sapos: %d\n", sapos);
    printf("Percentual de coelhos: %.2lf %%\n", percentual_c);
    printf("Percentual de ratos: %.2lf %%\n", percentual_r);
    printf("Percentual de sapos: %.2lf %%\n", percentual_s);

    return 0;
}
