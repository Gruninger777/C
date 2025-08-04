#include <stdio.h>
#include "util.h"

int main(){

    double r;

    printf("Digite o raio do circulo:");
    scanf("%lf", &r);

    double d = diametro(r);
    double c = circunferencia(r, 3.14);
    double a = area(r, 3.14);
    
    printf("O diâmetro é: %lf\n", d);
    printf("A circunferência é: %lf\n", c);
    printf("A área é: %lf\n", a);

    return 0;
}
