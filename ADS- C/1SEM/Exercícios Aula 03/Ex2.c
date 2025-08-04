#include <stdio.h>

int main(void) {
  float Peso = 83.2;
  float Altura = 1.71 * 1.71;
  float imc = Peso / Altura;
  printf("%f / %f = %f", Peso, Altura, imc);
  return 0;
}