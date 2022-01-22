#include <stdio.h>
#include <math.h>

double calcular_raiz1 (double a, double b, double c){
    double raiz;
    raiz = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);

    return raiz;
}

double calcular_raiz2 (double a, double b, double c){
    double raiz;
    raiz = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);

    return raiz;
}

int main() {
    double a, b, c, r1, r2, delta;
    scanf("%lf %lf %lf", &a, &b, &c);

    delta = (b * b) - 4 * a * c;

    if ((a == 0) || (delta < 0))
        printf("Impossivel calcular\n");

    else {
        r1 = calcular_raiz1(a, b, c);
        r2 = calcular_raiz2(a, b, c);

        printf("R1 = %.5lf\n", r1);
        printf("R2 = %.5lf\n", r2);}

    return 0;
}