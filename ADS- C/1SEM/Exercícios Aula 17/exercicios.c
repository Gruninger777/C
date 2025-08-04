#include <stdio.h>

void inicio() {
    printf("Content-type: text/html; charset=UTF-8\n\n");
    printf("<!DOCTYPE html>\n");
    printf("<html>\n");
    printf("<head>\n");
    printf("<meta charset=\"UTF-8\">\n");
}

void meio() {
    printf("</head>");
    printf("<body>\n");
}

void aba(char *texto){
    printf("<title>%s</title>", texto);
}

void titulo(char *titulo){
    printf("<h1>%s</h1>", titulo);
}


void fim() {
    printf("</body>\n");
    printf("</html>\n");
}

int main() {
    inicio();
    meio();
    aba("texto digitado");
    titulo("titulo digitado");
    fim();
    return 0;
}
