#include <stdio.h>

int main() {
    double salario, imposto;
    scanf("%lf", &salario);

    if (salario <= 2000)
        printf("Isento\n");

    else if (2000 < salario && salario <= 3000) {
        salario -= 2000;
        imposto = salario * 0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else if (3000 < salario && salario <= 4500) {
        salario -= 3000;
        imposto = (0.08 * 1000) + (0.18 * salario);
        printf("R$ %.2lf\n", imposto);
    }
    else {
        salario -= 4500;
        imposto = (0.08 * 1000) + (0.18 * 1500) + (0.28 * salario);
        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}