#include <stdio.h>

int main() {
    double valor;
    int cem, cinquenta, vinte, dez, cinco, dois, um, cent50, cent25, cent10, cent5, cent1;
    scanf("%lf", &valor);

    // Notas

    cem = valor / 100;
    valor -= cem * 100;
    cinquenta = valor / 50;
    valor -= cinquenta * 50;
    vinte = valor / 20;
    valor -= vinte * 20;
    dez = valor / 10;
    valor -= dez * 10;
    cinco = valor / 5;
    valor -= cinco * 5;
    dois = valor / 2;
    valor -= dois * 2;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", cem);
    printf("%d nota(s) de R$ 50.00\n", cinquenta);
    printf("%d nota(s) de R$ 20.00\n", vinte);
    printf("%d nota(s) de R$ 10.00\n", dez);
    printf("%d nota(s) de R$ 5.00\n", cinco);
    printf("%d nota(s) de R$ 2.00\n", dois);
    
    // Moedas
    valor = valor * 100;

    um = valor / 100;
    valor -= um * 100;
    cent50 = valor / 50;
    valor -= cent50 * 50;
    cent25 = valor / 25;
    valor -= cent25 * 25;
    cent10 = valor / 10;
    valor -= cent10 * 10;
    cent5 = valor / 5;
    valor -= cent5 * 5;
    cent1 = valor;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", um);
    printf("%d moeda(s) de R$ 0.50\n", cent50);
    printf("%d moeda(s) de R$ 0.25\n", cent25);
    printf("%d moeda(s) de R$ 0.10\n", cent10);
    printf("%d moeda(s) de R$ 0.05\n", cent5);
    printf("%d moeda(s) de R$ 0.01\n", cent1);

    return 0;
}