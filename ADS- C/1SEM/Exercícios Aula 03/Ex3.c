#include <stdio.h>

void main(void) {
  float Peso ;
  float Altura ;

    printf("Digite o seu peso ");
    scanf("%f", &Peso);

    printf("Digite o sua altura ");
    scanf("%f", &Altura);

  float imc = Peso / Altura * Altura;
    printf("Seu IMC é %f", imc);
}