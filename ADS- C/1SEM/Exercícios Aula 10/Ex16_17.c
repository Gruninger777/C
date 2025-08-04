#include <stdio.h>
#include "igualdade.h"

int recebe (void) {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    return x;
}

int main (void) {
    int n[3];
    for (int x = 0; x < 3; x++) {
        n[x] = recebe();
    }

    int n_maior = maior(n[0], n[1]);
    int n_maximo = maior(n[2], n_maior);

    printf("Maior de todos os numeros: %d\n", n_maximo);

    return 0;
}