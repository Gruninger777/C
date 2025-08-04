#include <string.h>
#include <stdio.h>

int main (void) {
    char palavra[11];
    int i, j, palindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%10s", palavra);

    int tamanho = strlen(palavra);

    for (i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--) {
        if (palavra[i] == palavra[j]) {
            palindromo = 1;
        } else {
            palindromo = 0;
            break;
        }
    }

    if(palindromo) {
        printf("Resultado: É um Palíndromo!\n");
    } else {
        printf("Resultado: Não é!\n");
    }
    return 0;
}