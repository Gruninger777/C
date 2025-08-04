#include <stdio.h>

int recebenum (void) {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    return x;
}

int soma (int x, int y) {
    return x + y;
}

void imprimeresult (int resultado) {
    printf ("Resultado: %d\n", resultado);
}

int main(void) {
    int n1, n2, resultado;

    n1 = recebenum();
    printf("Digitado: %d\n", n1);

    n2 = recebenum();
    printf("Digitado: %d\n", n2);

    resultado = soma(n1, n2);
    imprimeresult(resultado);

    return 0;
}

