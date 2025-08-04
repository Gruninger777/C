#include <stdio.h>

float media(float numeros[], int tam) {
    float soma = 0;
    for (int i = 0; i < tam; i++) {
        soma += numeros[i];
    }
    return soma / tam;
}

float dobro(float numeros[], int tam) {
    for (int i = 0; i < tam; i++) {
        numeros[i] *= 2.0;
    }
    return media(numeros, tam);
}

void maior(float numeros[], int tam) {
    int maior = 0;
    for (int i = 1; i < tam; i++) {
        if (numeros[i] > numeros[maior]) {
            maior = i;
        }
    }
    float temp = numeros[0];
    numeros[0] = numeros[maior];
    numeros[maior] = temp;
}

int main() {
    float numeros[2];

    printf("Digite 2 numeros reais:\n");
    for (int i = 0; i < 2; i++) {
        scanf("%f", &numeros[i]);
    }

    printf("Vetor antes da media: ");
    for (int i = 0; i < 2; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    float media_valores = media(numeros, 2);
    printf("Media dos valores: %.2f\n", media_valores);

    float nova_media = dobro(numeros, 2);

    printf("Vetor apos o dobro: ");
    for (int i = 0; i < 2; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");
    printf("Nova media apos o dobro: %.2f\n", nova_media);

    printf("Vetor antes da funcao maior: ");
    for (int i = 0; i < 2; i++) {
        printf("%.2f ", numeros[i]);
    }
    printf("\n");

    maior(numeros, 2);
    printf("Vetor apos a funcao maior: ");
    for (int i = 0; i < 2; i++) {
        printf("%.2f\n ", numeros[i]);
    } 
    return 0;
}