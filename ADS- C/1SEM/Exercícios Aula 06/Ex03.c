#include <stdio.h>

int main() {
    int lado1, lado2, lado3;
    
        printf("Digite o primeiro lado (-1 para sair): ");
        scanf("%d", &lado1);
    
    while (lado1 != -1) {

        printf("Digite o segundo lado: ");
        scanf("%d", &lado2);

        printf("Digite o terceiro lado: ");
        scanf("%d", &lado3);

        if ((lado1 * lado1 == lado2 * lado2 + lado3 * lado3) ||
            (lado2 * lado2 == lado1 * lado1 + lado3 * lado3) ||
            (lado3 * lado3 == lado1 * lado1 + lado2 * lado2)) {
            printf("Os lados formam um triângulo retângulo.\n");
        } else {
            printf("Os lados não formam um triângulo retângulo.\n");
        }
        printf("Digite o primeiro lado (-1 para sair): ");
        scanf("%d", &lado1);
    } 

    printf("Programa encerrado.\n");
    return 0;
}
