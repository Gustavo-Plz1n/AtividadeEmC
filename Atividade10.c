#include <stdio.h>
#include <math.h>

int main() {
    float raio, comprimento, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    comprimento = 2 * M_PI * raio;

    area = M_PI * raio * raio;

    volume = (3.0 / 4.0) * M_PI * pow(raio, 3);

    printf("Comprimento da esfera: %.2f\n", comprimento);
    printf("Área da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}