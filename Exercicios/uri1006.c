#include <stdio.h>

float media(float a, float b, float c) {
    float media;
    media = ((a * 2) + (b * 3) + (c * 5)) / 10;
    return media;
 }

int main () {
    float a, b, c;
    float mediac;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    mediac = media(a, b, c);

    printf("MEDIA = %.1f\n", mediac);

}
