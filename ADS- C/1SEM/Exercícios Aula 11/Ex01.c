#include <stdio.h>

int main () {
    int x[5] = {1,2,3,4,5};
    
    for (int i = 0; i < 5; i++) {
        printf("x[%d] = %d;\n", i, x[i]);
    }
    
    return 0;
}