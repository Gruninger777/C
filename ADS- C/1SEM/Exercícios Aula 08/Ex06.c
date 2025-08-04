#include <stdio.h>

int main() {
    int A, B;

    printf("Tabela Verdade do Operador Não ( ! )\n");

    for (A = 0; A <= 1; A++) {
            printf("A: %d ! %d = %d\n", A, A, ! A);
        }

    return 0;
}