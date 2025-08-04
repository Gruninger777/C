#include <stdio.h>

int main(void) {
  char produto;

  printf("Digite o produto que deseja\n Suco(S)\n Batata(B)\n Hamburguer(H)\n Combos(C)\n F para encerrar: ");
  produto = getchar();
  getchar();

  int Suco = 0;
  int Batata = 0;
  int Hamburguer = 0;
  int Combos = 0; 
  int totali;
  float totalv;

  while( produto != 'F' ) {
    switch (produto) {
        case 'S':
    	    Suco++;
    	    printf("\n Suco.\n");
    	    break;
        case 'B': 
        	Batata++;
        	printf("\n Batata.\n");
        	break;
        case 'H':
        	Hamburguer++;
        	printf("\n Hamburguer.\n");
        	break;
	    case 'C':
        	Combos++;
        	printf("\n Combos.\n");
        	break;
        default:
        	printf("\n Produto não encontrado!\n");
        	break;
    }

    printf("\nDigite o produto que deseja\n Suco(S)\n Batata(B)\n Hamburguer(H)\n Combos(C)\n F para encerrar: ");
    produto = getchar();
    getchar();
  }

    printf("\nSuco (S):%d\nBatata (B):%d\nHamburguer (H):%d\nCombo (C):%d\n\n", Suco, Batata, Hamburguer, Combos);

    totali = Suco + Batata + Hamburguer + Combos;
  
    printf("Total de itens vendidos (Unidades): %d\n", totali);
  
    totalv = (Suco * 9.00) + (Batata * 10.00) + (Hamburguer * 15.00) + (Combos * 30.00);
    
    printf("Total de itens (R$): %.2f", totalv);
  
  return 0;
}