#include <stdio.h>

int main() {
    int altura, cont = 0;
    char direcao;

    printf("Digite a altura do triângulo: ");
        scanf("%d", &altura);

    while (1) {
        if (direcao == 'F' || direcao == 'f') {
            break;
        }
        cont++;
        if (direcao == 'A' || direcao == 'a' || cont == 1) {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
            
        } else if (direcao == 'D' || direcao == 'd') {
            for (int i = 1; i <= altura; i++) {
                for (int j = 1; j <= altura - i; j++) {
                    printf(" ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else {
            printf("Direção inválida. Use A ou D.\n");
        }
        printf("Digite a direção (A para esquerda, D para direita, F para sair): ");
        scanf(" %c", &direcao);
    }

    printf("Programa encerrado.\n");
    return 0;
}
