#include <stdio.h>

double consumo_medio(int kmtotal, double c_gasto) {
    double consumo;
    consumo = kmtotal / c_gasto;

    return consumo;
}

int main() {
    int kmtotal;
    double c_gasto, consumo;

    scanf("%d", &kmtotal);
    scanf("%lf", &c_gasto);

    consumo = consumo_medio(kmtotal, c_gasto);

    printf("%.3lf km/l\n", consumo);

    return 0;
}