#include <stdio.h>
#include <string.h>

int main (void) {
    char senha[6];
    int tentativas = 3, primeira_tentativa = 0;
    
    while (tentativas > 0) {     
        printf("Digite a senha:");
        scanf("%5s", senha);

        if(strcmp(senha, "azimo") == 0) {
            printf("Bem Vindo!\n");
            return 0;
        } else {
            tentativas--;
            if(tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            } else {
                printf("Tente novamente mais tarde.\n");
                return 0;
            }
        }
    }
}
