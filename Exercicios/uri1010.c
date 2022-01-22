#include <stdio.h>

double valor_a_pagar(int quantidade, double preco){
    double valor;
    valor = quantidade * preco;

    return valor;
}

int main () {
    int codigo1, codigo2, quantidade1, quantidade2;
    double preco1, preco2;
    double valor;
    scanf("%d %d %lf", &codigo1, &quantidade1, &preco1);
    scanf("%d %d %lf", &codigo2, &quantidade2, &preco2);

    valor = valor_a_pagar(quantidade1, preco1) + valor_a_pagar(quantidade2, preco2);

    printf("VALOR A PAGAR: R$ %.2lf\n", valor);

    return 0;
}