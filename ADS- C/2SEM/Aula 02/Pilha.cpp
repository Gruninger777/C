#include <stdlib.h>
#include <stdio.h>

// Definição da estrutura de um Nó (elemento) da pilha.
// Cada nó contém um valor inteiro (dado) e um ponteiro para o próximo nó na pilha.
// A pilha é implementada como uma lista encadeada simples, onde cada nó aponta para o anterior.
typedef struct NO{
	int dado; // Armazena o valor inteiro do nó.
	struct NO *prox; // Ponteiro para o próximo nó na pilha (o nó abaixo na estrutura).
}NO;
	
// Definição da estrutura da Pilha.
// A pilha é representada por um único ponteiro 'topo', que aponta para o último nó adicionado (o topo da pilha).
typedef struct{
	NO *topo; // Ponteiro para o nó que está no topo da pilha.
}PILHA;

// Função para inicializar a pilha.
// Define o ponteiro 'topo' da pilha como NULL, indicando que a pilha está vazia.
void inicializaPilha(PILHA *p){
	p->topo = NULL; // O topo da pilha é definido como NULL, pois não há elementos.
}

// Função para adicionar um elemento (empilhar) no topo da pilha.
// 'dado' é o valor a ser adicionado e 'p' é um ponteiro para a pilha onde o dado será empilhado.
void empilha(int dado, PILHA *p){
	// Aloca dinamicamente memória para um novo nó.
	// 'ptr' será um ponteiro para este novo nó.
	NO *ptr = (NO*) malloc(sizeof(NO)); 
	
	// Verifica se a alocação de memória foi bem-sucedida.
	if(ptr == NULL){ 
		printf("Erro de alocação de nó\n"); // Mensagem de erro se a memória não puder ser alocada.
		return; // Sai da função, pois não é possível adicionar o nó.
	} else { 
		// Atribui o valor 'dado' ao campo 'dado' do novo nó.
		ptr->dado = dado; 
		// O ponteiro 'prox' do novo nó aponta para o nó que atualmente está no topo da pilha.
		// Isso faz com que o novo nó seja o novo topo.
		ptr->prox = p->topo; 
		// Atualiza o ponteiro 'topo' da pilha para apontar para o novo nó, tornando-o o novo topo.
		p->topo = ptr; 
	}
}

// Função para remover um elemento (desempilhar) do topo da pilha.
// Retorna o valor do dado removido.
int desempilha(PILHA *p){
	NO* ptr = p->topo; // 'ptr' aponta para o nó que está atualmente no topo da pilha.
	int dado; // Variável para armazenar o dado do nó a ser desempilhado.
	
	// Verifica se a pilha está vazia (se não há elementos para desempilhar).
	if(ptr == NULL) {
		printf("Pilha vazia\n"); // Mensagem de erro se a pilha estiver vazia.
		return -1; // Retorna um valor indicando erro (geralmente -1 ou um valor sentinela).
	}else { 
		// Atualiza o ponteiro 'topo' da pilha para o próximo nó.
		// O nó que estava abaixo do topo se torna o novo topo.
		p->topo = ptr->prox; 
		// Desconecta o nó que está sendo desempilhado da pilha, definindo seu 'prox' como NULL.
		ptr->prox = NULL; 
		// Salva o dado do nó que está sendo desempilhado.
		dado = ptr->dado;
		// Libera a memória alocada para o nó desempilhado, evitando vazamentos de memória.
		free(ptr); 
		return dado; // Retorna o dado que foi desempilhado.
	}
}

// Função para imprimir todos os elementos da pilha, do topo até a base.
void imprimePilha(PILHA *p){
	NO *ptr = p->topo; // 'ptr' começa apontando para o topo da pilha.
	
	// Verifica se a pilha está vazia.
	if(ptr == NULL) {
		printf("A pilha esta vazia!\n"); // Mensagem se a pilha não contiver elementos.
	} else { 
		// Percorre a pilha enquanto 'ptr' não for NULL (ou seja, até o final da pilha).
		while(ptr != NULL){
			printf("%d ", ptr->dado); // Imprime o dado do nó atual.
			ptr = ptr->prox; // 'ptr' avança para o próximo nó na pilha.
		}
		printf("\n"); // Imprime uma nova linha para formatar a saída.
	}
}

// Função principal do programa.
int main(){
	// Aloca dinamicamente memória para uma nova pilha.
	PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));
	
	// Verifica se a alocação da pilha foi bem-sucedida.
	if(p1 == NULL){
		printf("Erro de alocação da pilha\n"); // Mensagem de erro se a alocação falhar.
		exit(0); // Encerra o programa com código de erro.
	} else {
		// Inicializa a pilha recém-criada.
		inicializaPilha(p1);
		
		// Empilha alguns valores na pilha.
		empilha(10,p1);
		empilha(20,p1);
		empilha(30,p1);
		
		printf("Pilha após empilhar 10, 20, 30:\n");
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
	
	// Libera a memória alocada para a pilha antes de finalizar o programa.
	// Isso é importante para evitar vazamentos de memória.
	free(p1);
	return 0; // Indica que o programa foi executado com sucesso.
}
