#include <stdio.h>

double s_total(double s_fixo, double vendas) {
    double salario;
    salario = s_fixo + (0.15 * vendas);
    return salario;
}

int main() {
    char nome[100];
    double s_fixo, vendas;
    double total;

    scanf("%s", nome);
    scanf("%lf", &s_fixo);
    scanf("%lf", &vendas);

    total = s_total(s_fixo, vendas);

    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
