#include <stdio.h>
#include <string.h>

int main(void){
    char senha[20];

    printf("Crie sua senha:\n");
    scanf("%19s", senha);

    if (strlen(senha) >= 8) {
        printf("Senha conforme.\n");
    } else {
        printf("Senha não conforme.\n");
    }

    return 0;
}
