#include <stdio.h>

int main() {
    float salarioMinimo, salarioFuncionario, qtdSalariosMinimos;

    printf("Digite o valor do salário mínimo: R$ ");
    scanf("%f", &salarioMinimo);

    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salarioFuncionario);

    qtdSalariosMinimos = salarioFuncionario / salarioMinimo;

    printf("O funcionário recebe %.2f salários mínimos.\n", qtdSalariosMinimos);

    return 0;
}