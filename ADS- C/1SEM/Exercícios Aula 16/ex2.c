#include <stdio.h>
#include <string.h>

int main(void) {

    char nome[80] = "";
    char nomePersonagem[100] = "";

    printf("Digite o titulo do livro: ");
    scanf("%s", nome);

    FILE *pArquivo = NULL;
    pArquivo = fopen(nome, "w");

  if (pArquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    return 1;
  }

  

    while(1){

        printf("Digite o nome do personagem ou F para finalizar: ");
        scanf("%s", nomePersonagem);

        if(strcmp(nomePersonagem, "F") == 0){
            break;
        }

        fprintf(pArquivo, "%s\n", nomePersonagem);

    }


  fclose(pArquivo);
  return 0;
}