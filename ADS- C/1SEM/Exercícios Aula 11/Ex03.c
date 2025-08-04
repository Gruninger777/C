#include <stdio.h>
#define TAM 4

int main() {
    float n[TAM] = {5.1, 7.2, 8.3, 6.4};

    for(int i = 0; i < TAM; i++) {
        printf("Nota %.2f\n", n[i]);
    }

    double total = 0;
    for (int f = 0; f < TAM; f++) {
        total += n[f];
    }
    printf("Total = %.2f\n", total);
    
    return 0;
}
