#include <stdio.h>
#include <string.h>

int main(void) {

    char destino[20] = "";  
    char ultimo[20] = "";

    
    FILE *pArquivo = NULL;
    pArquivo = fopen("remedios.txt", "r");

    if (pArquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while(fgets(destino, 20, pArquivo) != NULL) {
        
        strcpy(ultimo, destino);
    }
    printf("Ultimo: %s\n", ultimo);
    fclose(pArquivo);
    return 0;
}
