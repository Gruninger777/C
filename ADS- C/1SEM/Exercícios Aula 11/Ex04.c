#include <stdio.h>

int main() {
    float numeros[3];
    float soma = 0;

    printf("Digite 3 numeros reais:\n");
    for (int i = 0; i < 3; i++) {
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }

    printf("A soma dos numeros e: %.2f\n", soma);

    return 0;
}



    