#include <stdio.h>

int main() {
    float salarioAtual, novoSalario;

    printf("Digite o salário atual do funcionário: ");
    scanf("%f", &salarioAtual);

    novoSalario = salarioAtual * 1.25;

    printf("O novo salário do funcionário é: R$ %.2f\n", novoSalario);

    return 0;
}