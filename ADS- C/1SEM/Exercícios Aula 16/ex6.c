#include <stdio.h>

struct filme{

    char nome[50];
    char genero[50];
    int ano;

};

int main(){


    struct filme dado;

    printf("Digite o nome do filme: ");
    scanf("%s", dado.nome);
    printf("Digite o Genero do filme: ");
    scanf("%s", dado.genero);
    printf("Digite o ano de lancamento do filme: ");
    scanf("%d", &dado.ano);

    FILE * pArquivo;
    pArquivo = fopen("filme.txt", "wb");

     if (pArquivo == NULL) {
        puts("Erro ao abrir o arquivo.\n");
        return 1;
    } else {
        puts("Arquivo gravado com sucesso");
    }

    fwrite(&dado, sizeof(struct filme), 1, pArquivo );

    fclose(pArquivo);

    return 0;
}