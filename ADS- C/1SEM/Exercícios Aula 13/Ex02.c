#include <stdio.h>
#include <string.h>

int main() {
    int maior;

    int vetor[5] = {9, 8 ,7 ,6 ,3};

    printf("\nVetor antes: %d %d %d %d %d \n\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

    for(int j = 0; j <= 3; j++){
        for(int i = 0; i < 5; i++) {
            if( vetor[i] > vetor[i+1] ) {
                maior = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = maior;
            }
            printf("%d ", vetor[i]);
        }
        printf("\n\n");
    } 
    return 0;
}