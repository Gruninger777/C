#include <stdio.h>

int main() {
    float raio, diametro, circunferencia, area, PI = 3.14;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    diametro = 2 * raio;
    circunferencia = 2 * PI * raio;
    area = PI * raio * raio;

    printf("Diâmetro: %.2f\n", diametro);
    printf("Circunferência: %.2f\n", circunferencia);
    printf("Área: %.2f\n", area);

    return 0;
}
