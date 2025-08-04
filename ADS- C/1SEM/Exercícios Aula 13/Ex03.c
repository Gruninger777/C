#include <stdio.h>
#include <string.h>

void ordenar(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
}

int saoAnagramas(char *str1, char *str2) {
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }
    ordenar(str1);
    ordenar(str2);
    int n = strlen(str1);
    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[i])
            return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (saoAnagramas(str1, str2)) {
        printf("As strings são anagramas.\n");
    } else {
        printf("As strings não são anagramas.\n");
    }
    return 0;
}