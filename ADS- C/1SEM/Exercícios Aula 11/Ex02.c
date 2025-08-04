#include <stdio.h>
#define pi 3.14159

int main () {
    float raio;
    
    printf("Digite o raio: ");
    scanf("%f", &raio);
    
    float area = pi * raio * raio;

    printf("Raio = %f\n", area);
    
    return 0;
}