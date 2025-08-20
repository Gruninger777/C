#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main(void) {
    Pilha *p = PilhaNovo();
    Pilha *p2 = PilhaNovo();
    
    PilhaInserir(p, 15);
    PilhaInserir(p2, 15);
}
