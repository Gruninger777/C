#include <stdio.h>

int main(void) {
  float Peso;
  float Altura;
  
  printf("Digite o Peso:");
  scanf("%f", &Peso);
  
  printf("Digite a Altura:");
  scanf("%f", &Altura);
  
  float IMC = Peso / (Altura * Altura);
  
    if(IMC >= 40) {
        printf ("Diagnóstico: Obesidade Classe III");
    } else {
        if (IMC >= 35) {
            printf ("Diagnóstico: Obesidade Classe II");
        } else {
            if (IMC >= 30) {
                printf ("Diagnóstico: Obesidade Classe I");
            } else {
                if (IMC >= 25) {
                    printf ("Diagnóstico: Sobrepeso");
                } else {
                    if (IMC >= 18.5) {
                        printf ("Diagnóstico: Intervalo Normal");
                    } else {
                        printf ("Diagnóstico: Baixo Peso");
                    }
                }
            }
        }
    }
}