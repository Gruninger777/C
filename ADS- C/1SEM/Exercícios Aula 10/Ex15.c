#include <stdio.h>
#include "igualdade.h"

int pedidonumero(void) {
    int x;
    
    printf("Digite um numero: ");
    scanf("%d", &x);

    return x;
}

int main() {
    int n1, n2;

    n1 = pedidonumero();
    n2 = pedidonumero();

    if (igual(n1, n2)) {
        printf("Iguais: Sim\n");
        return 0;
    } else {
        printf("Iguais: Não\n");
    }

    int ma = maior(n1, n2);
    printf("Maior: %d\n", ma);

    int me = menor(n1, n2);
    printf("Menor: %d\n", me);

    return 0;
    }