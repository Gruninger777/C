#include <stdio.h>
#include <string.h>

int main(void) {

    char data[11];
    char hora[6];  

    
    FILE *pArquivo = NULL;
    pArquivo = fopen("remedios.txt", "a");

    if (pArquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(1) {
        
        printf("Digite a data (DD/MM/AAAA) ou digite F para finalizar: ");
        scanf("%10s", data);

        if (strcmp(data, "F") == 0) {
            break;
        }

        
        printf("Digite a hora (HH:MM): ");
        scanf("%5s", hora);


        fprintf(pArquivo, "%s %s\n", data, hora);
    }

    fclose(pArquivo);
    return 0;
}
