#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main (void) {
    char palavra[6], recebe_letra;
    int tentativas = 3;
    
    printf("Digite uma palavra de até 5 letras:");
    scanf("%s", palavra);
    system("clear");
    
    while (tentativas > 0) {
        printf("Digite uma letra:");
        getchar();
        scanf("%c", &recebe_letra);

        if(strchr(palavra, recebe_letra)!=NULL) {
            printf("A letra %c está na palavra!\n", recebe_letra);
        } else {
            printf("A letra %c não está na palavra!\n", recebe_letra);
            tentativas--;
        }
    }

    printf("Você errou 3 vezes, fim de jogo!\nBurro!\n");
    return 0;
}