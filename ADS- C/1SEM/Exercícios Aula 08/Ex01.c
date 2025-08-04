#include <stdio.h>

int main() {
    int contador = 0;
    int fim = 3;
    int numero = 0;

    do {
        printf("Digite o número: ");
        scanf("%d", &numero);

        if (numero == 7) {
            printf("Você Ganhou!\n");
            contador = fim;
        } else {
            contador++;
            if (contador < fim) {
                printf("Número errado!\nTentativas restantes: %d.\n", fim - contador);
            } else {
                printf("Fim de jogo!\n");
            }
        }
    } while (contador < fim);

    return 0;
}