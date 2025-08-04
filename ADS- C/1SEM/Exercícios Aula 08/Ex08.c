#include <stdio.h>

int testa_par (int x) {
    if (x % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main (void) {
    int numero = 0;

    printf("Digite um número:");
    scanf("%d", &numero);
    printf("%d", testa_par(numero));

    return 0;
}