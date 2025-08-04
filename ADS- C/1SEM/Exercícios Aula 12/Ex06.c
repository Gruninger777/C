#include <stdio.h>
#include<string.h>

int main() {
    char primeiro[20], segundo[20], completo[40] = " ";

    printf("Digite seu primeiro nome\n");
    scanf("%s", primeiro);

    printf("Digite seu segundo nome\n");
    scanf("%s", segundo);

    strcat(completo, primeiro);
    strcat(completo, " ");
    strcat(completo, segundo);
    printf("Nome completo: %s\n", completo);

    return 0;
}