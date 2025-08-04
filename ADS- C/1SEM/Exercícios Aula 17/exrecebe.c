#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char *recebido = getenv("QUERY_STRING");
    printf("Content-type: text/html\n\n");

    char *pos_igual = strchr(recebido, '=');
    pos_igual = pos_igual + 1;

    int numero = atoi (pos_igual);

    printf ("recebido: %d\n", numero * 2);

    return 0;

    
}