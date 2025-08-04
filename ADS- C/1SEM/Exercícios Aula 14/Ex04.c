#include <stdio.h>
#include <string.h>

// Palindromo

void palindromo(char *str) {
    int tamanho = strlen(str);
    char *inicio = str;
    char *fim = str + tamanho - 1;

    while (inicio < fim) {
        if (*inicio != *fim) {
            printf("A palavra não é um palindromo!\n");
            return;
        }
        inicio++;
        fim--;
    }
    printf("A palavra é um palindromo!\n");
}


int main () {
    char palavra [100];

    printf("Digite a palavra: ");
    scanf("%s", palavra);

    printf("A palavra digitada foi: %s\n", palavra);

    palindromo (palavra);

    return 0;
}
