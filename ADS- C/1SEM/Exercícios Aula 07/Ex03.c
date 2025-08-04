#include <stdio.h>

int main(void) {
  char modo;

  printf("> Digite o modo que deseja:\nA para lavar, \nB para Enxaguar e Secar, \nC para Lavar, enxaguar e secar \nF para encerrar:\n");
  modo = getchar();
  getchar();

  while( modo != 'F' ) {
    switch (modo) {
      case 'A':
	printf ("Lavar, ");
      case 'B': 
	printf ("Enxaguar e ");
      case 'C':
	printf ("Secar. \n");
    }
    printf("> Digite o modo que deseja:\nA para lavar, \nB para Enxaguar e Secar, \nC para Lavar, enxaguar e secar \nF para encerrar:\n");
    modo = getchar();
    getchar();
  }
  return 0;
}