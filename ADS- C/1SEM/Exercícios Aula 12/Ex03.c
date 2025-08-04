#include <stdio.h>

int main() {
    char senha[100];
    int tentativas = 3;
    int i;
    
    while (tentativas > 0) {
        printf("Digite a senha: ");
        scanf("%s", senha);
        
        int senha_correta = 1;
        char senha_padrao[] = "azimo";
        
        for (i = 0; senha[i] != '\0' || senha_padrao[i] != '\0'; i++) {
            if (senha[i] != senha_padrao[i]) {
                senha_correta = 0;
                break;
            }
        }
        
        if (senha_correta) {
            printf("Seja bem vindo!\n");
            return 0;
        } else {
            tentativas--;
            if (tentativas > 0) {
                printf("Senha errada. Tentativas restantes: %d\n", tentativas);
            }
        }
    }
    
    printf("Tente novamente mais tarde\n");
    
    return 0;
}