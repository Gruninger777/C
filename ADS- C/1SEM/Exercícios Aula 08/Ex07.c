#include <stdio.h>

int main (void) {
    int w, x, y, z = 0;
    
    printf("Digite o n°1: ");
    scanf("%d", &w);
    
    printf("Digite o n°2: ");
    scanf("%d", &x);

    printf("Digite o n°3: ");
    scanf("%d", &y);

    printf("Digite o n°4: ");
    scanf("%d", &z);
    
    for(int contadorw = 1; contadorw <= w; contadorw++) {
        printf ("*");
    } 
    printf("\n");
    for (int contadorx = 1; contadorx <= x; contadorx++) {
        printf ("*");
    } 
    printf("\n");
    for (int contadory = 1; contadory <= y; contadory++) {
        printf ("*");
    } 
    printf("\n");
    for (int contadorz = 1; contadorz < z; contadorz++) {
        printf ("*");
    } 
    printf("\n");

    return 0;
}