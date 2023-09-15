#include <stdio.h>

int main() {
    int anoDeNascimento, anoAtual, idadeAtual, idade2050;

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoDeNascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idadeAtual = anoAtual - anoDeNascimento;

    idade2050 = 2050 - anoDeNascimento;

    printf("A idade da pessoa no ano atual é: %d anos\n", idadeAtual);
    printf("A idade da pessoa em 2050 será: %d anos\n", idade2050);

    return 0;
}