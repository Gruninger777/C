#include <stdlib.h>
#include <stdio.h>

// Defini��o da estrutura de um N� (elemento) da pilha.
// Cada n� cont�m um valor inteiro (dado) e um ponteiro para o pr�ximo n� na pilha.
// A pilha � implementada como uma lista encadeada simples, onde cada n� aponta para o anterior.
typedef struct NO{
	int dado; // Armazena o valor inteiro do n�.
	struct NO *prox; // Ponteiro para o pr�ximo n� na pilha (o n� abaixo na estrutura).
}NO;
	
// Defini��o da estrutura da Pilha.
// A pilha � representada por um �nico ponteiro 'topo', que aponta para o �ltimo n� adicionado (o topo da pilha).
typedef struct{
	NO *topo; // Ponteiro para o n� que est� no topo da pilha.
}PILHA;

// Fun��o para inicializar a pilha.
// Define o ponteiro 'topo' da pilha como NULL, indicando que a pilha est� vazia.
void inicializaPilha(PILHA *p){
	p->topo = NULL; // O topo da pilha � definido como NULL, pois n�o h� elementos.
}

// Fun��o para adicionar um elemento (empilhar) no topo da pilha.
// 'dado' � o valor a ser adicionado e 'p' � um ponteiro para a pilha onde o dado ser� empilhado.
void empilha(int dado, PILHA *p){
	// Aloca dinamicamente mem�ria para um novo n�.
	// 'ptr' ser� um ponteiro para este novo n�.
	NO *ptr = (NO*) malloc(sizeof(NO)); 
	
	// Verifica se a aloca��o de mem�ria foi bem-sucedida.
	if(ptr == NULL){ 
		printf("Erro de aloca��o de n�\n"); // Mensagem de erro se a mem�ria n�o puder ser alocada.
		return; // Sai da fun��o, pois n�o � poss�vel adicionar o n�.
	} else { 
		// Atribui o valor 'dado' ao campo 'dado' do novo n�.
		ptr->dado = dado; 
		// O ponteiro 'prox' do novo n� aponta para o n� que atualmente est� no topo da pilha.
		// Isso faz com que o novo n� seja o novo topo.
		ptr->prox = p->topo; 
		// Atualiza o ponteiro 'topo' da pilha para apontar para o novo n�, tornando-o o novo topo.
		p->topo = ptr; 
	}
}

// Fun��o para remover um elemento (desempilhar) do topo da pilha.
// Retorna o valor do dado removido.
int desempilha(PILHA *p){
	NO* ptr = p->topo; // 'ptr' aponta para o n� que est� atualmente no topo da pilha.
	int dado; // Vari�vel para armazenar o dado do n� a ser desempilhado.
	
	// Verifica se a pilha est� vazia (se n�o h� elementos para desempilhar).
	if(ptr == NULL) {
		printf("Pilha vazia\n"); // Mensagem de erro se a pilha estiver vazia.
		return -1; // Retorna um valor indicando erro (geralmente -1 ou um valor sentinela).
	}else { 
		// Atualiza o ponteiro 'topo' da pilha para o pr�ximo n�.
		// O n� que estava abaixo do topo se torna o novo topo.
		p->topo = ptr->prox; 
		// Desconecta o n� que est� sendo desempilhado da pilha, definindo seu 'prox' como NULL.
		ptr->prox = NULL; 
		// Salva o dado do n� que est� sendo desempilhado.
		dado = ptr->dado;
		// Libera a mem�ria alocada para o n� desempilhado, evitando vazamentos de mem�ria.
		free(ptr); 
		return dado; // Retorna o dado que foi desempilhado.
	}
}

// Fun��o para imprimir todos os elementos da pilha, do topo at� a base.
void imprimePilha(PILHA *p){
	NO *ptr = p->topo; // 'ptr' come�a apontando para o topo da pilha.
	
	// Verifica se a pilha est� vazia.
	if(ptr == NULL) {
		printf("A pilha esta vazia!\n"); // Mensagem se a pilha n�o contiver elementos.
	} else { 
		// Percorre a pilha enquanto 'ptr' n�o for NULL (ou seja, at� o final da pilha).
		while(ptr != NULL){
			printf("%d ", ptr->dado); // Imprime o dado do n� atual.
			ptr = ptr->prox; // 'ptr' avan�a para o pr�ximo n� na pilha.
		}
		printf("\n"); // Imprime uma nova linha para formatar a sa�da.
	}
}

// Fun��o principal do programa.
int main(){
	// Aloca dinamicamente mem�ria para uma nova pilha.
	PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));
	
	// Verifica se a aloca��o da pilha foi bem-sucedida.
	if(p1 == NULL){
		printf("Erro de aloca��o da pilha\n"); // Mensagem de erro se a aloca��o falhar.
		exit(0); // Encerra o programa com c�digo de erro.
	} else {
		// Inicializa a pilha rec�m-criada.
		inicializaPilha(p1);
		
		// Empilha alguns valores na pilha.
		empilha(10,p1);
		empilha(20,p1);
		empilha(30,p1);
		
		printf("Pilha ap�s empilhar 10, 20, 30:\n");
		imprimePilha(p1); // Imprime a pilha para mostrar os elementos.
		
		// Desempilha um elemento e imprime o resultado e o estado atual da pilha.
		printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
		imprimePilha(p1);
		
		// Repete o processo de desempilhar e imprimir.
		printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
		imprimePilha(p1);
		
		// Repete o processo novamente.
		printf("Tentando desempilhar - resultado: %d\n", desempilha(p1));
		imprimePilha(p1);
	}
	
	// Libera a mem�ria alocada para a pilha antes de finalizar o programa.
	// Isso � importante para evitar vazamentos de mem�ria.
	free(p1);
	return 0; // Indica que o programa foi executado com sucesso.
}
