#include <stdio.h>

int main() {
   float nota, soma = 0.0;
   int contador = 0;

   printf("Digite as notas do aluno (digite -5 para calcular a média):\n");

   printf("Digite a nota: ");
   scanf("%f", &nota);

   while (nota != -5) {
      soma += nota;
      contador++;

      printf("Digite a nota: ");
      scanf("%f", &nota);
   }

   if (contador > 0) {
      float media = soma / contador;
      printf("A média das notas é: %.2f\n", media);
   } else {
      printf("Nenhuma nota foi digitada.\n");
   }

   return 0;
}
