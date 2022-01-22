#include <stdio.h>

double calcular_icm(double dist, int d1, int d2) {
    double icm;
    icm = dist / (d1 + d2);

    return icm;
}


int main() {
    double dist;
    int d1, d2;
    scanf("%lf %d %d", &dist, &d1, &d2);
    printf("%.2lf\n", calcular_icm(dist, d1, d2));

    return 0;
}