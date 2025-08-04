#include <stdio.h>

void subtrai3(int *num);

int main() {
  int numero;

  printf("digite um numero: ");
  scanf("%d", &numero);
  
  printf("recebido: %d\n", numero);

  subtrai3(&numero);
  
  printf("resultado: %d\n", numero);
  printf("atual: %d\n", numero);

  return 0;
}

void subtrai3(int *num) {
  *num = *num - 3;
}