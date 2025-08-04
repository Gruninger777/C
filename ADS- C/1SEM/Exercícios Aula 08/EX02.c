#include <stdio.h>

int main() {
    int numero, somaPares = 0;

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            somaPares += numero;
        } else {
            break;
        }
    }

    printf("Soma dos números pares: %d\n", somaPares);

    return 0;
}