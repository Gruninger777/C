#include <stdio.h>
#include <math.h>

#define GRAVIDADE 9.81

float calcular_tempo_queda(float altura) {
    if (altura < 0) {
        return -1;
    }
    return sqrt((2 * altura) / GRAVIDADE);
}

float calcular_distancia_liberacao(float velocidade, float altura) {

    float tempo_queda = calcular_tempo_queda(altura);
    if (tempo_queda < 0) {
        return -1;
    }
    return velocidade * tempo_queda;
}


int main(){
    float altura, velocidade;

    printf("Digite a altura do lançamento (em metros): ");
    scanf("%f", &altura);

    printf("Digite a velocidade do objeto (em m/s): ");
    scanf("%f", &velocidade);

    if (altura >= 0 && velocidade > 0) { 
        float tempo_queda = calcular_tempo_queda(altura);
        float distancia = calcular_distancia_liberacao(velocidade, altura);
        if (distancia >= 0) {
            printf("A distância de liberação é: %.2f metros\n", distancia);
            printf("O tempo de queda é: %.2f segundos\n", tempo_queda);
        } else {
            printf("Erro no cálculo da distância.\n");
        }
    } else {
        if (altura < 0) {
            printf("Altura inválida. A altura deve ser maior ou igual a zero.\n");
        }
        if (velocidade <= 0) {
            printf("Velocidade inválida. A velocidade deve ser maior que zero.\n");
        }
    }

    return 0;
}
