#include <stdio.h>

int main() {
    float diagonalM, diagonalMenor, area;

    printf("Digite o valor da diagonal maior do losango: ");
    scanf("%f", &diagonalM);

    printf("Digite o valor da diagonal menor do losango: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalM * diagonalMenor) / 2.0;

    printf("A área do losango é: %.2f\n", area);

    return 0;
}