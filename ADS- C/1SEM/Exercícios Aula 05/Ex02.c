#include <stdio.h>

int main (void) {
    
    float x;
    float y;
    
    printf("Digite o primeiro número:");
    scanf("%f", &x);
    
    printf("Digite o segundo número:");
    scanf("%f", &y);
    
    printf("%f", (x > y) ? x : y);
    
    return 0;
}