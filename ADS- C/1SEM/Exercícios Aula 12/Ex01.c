#include <stdio.h>

int main(void){
    char nome [7] = "Carlos";

    printf("\n Nome: %s\n\n", nome);

    for (int i = 0; i < 7; i++){
        printf(" * %c", nome[i]);
    }

    printf("\n\n");

    return 0; 
}
