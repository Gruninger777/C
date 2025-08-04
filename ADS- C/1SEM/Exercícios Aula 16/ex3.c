#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[80] = "";
    char destino[100];

    printf("Digite o titulo do livro: ");
    scanf("%s", nome);

    FILE *pArquivo = NULL;
    pArquivo = fopen(nome, "r");

  if (pArquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }


     while(fgets(destino, 80, pArquivo) != NULL){

        printf("%s", destino);

}

  fclose(pArquivo);
  return 0;
}