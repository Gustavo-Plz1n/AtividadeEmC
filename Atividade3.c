#include <stdio.h>

int main() {
    float cotacaoDolar, valorDolar, valoremReais;

    printf("Digite a cotação do dólar em reais: ");
    scanf("%f", &cotacaoDolar);

    printf("Digite o valor em dólares: ");
    scanf("%f", &valorDolar);

    valoremReais = valorDolar * cotacaoDolar;

    printf("O valor em reais é: R$ %.2f\n", valoremReais);

    return 0;
}