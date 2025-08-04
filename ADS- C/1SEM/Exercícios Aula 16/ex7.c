#include <stdio.h>

struct filme{

    char nome[50];
    char genero[50];
    int ano;

};

int main(){


    struct filme dado;

    FILE * pArquivo;
    pArquivo = fopen("filme.txt", "rb");

    fread(&dado, sizeof(struct filme), 1, pArquivo );

    fclose(pArquivo);

    printf("Nome: %s\n", dado.nome);
    printf("Genero: %s\n", dado.genero);
    printf("Ano de Lancamento: %d\n", dado.ano);

    return 0;
}