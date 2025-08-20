//Arquivo com implementação de uma pilha

//Estrutura que representa um nó de uma pilha de inteiros
typedef struct NoPilha {
    int Valor; //valor do nó
    struct NoPilha * Proximo; //endereço de memória do próximo elemento
}NoPilha;

//Estrutura que representa uma pilha de inteiros
typedef struct {
    NoPilha *Topo; //Endereço de memória do topo da pilha
    int Quantidade;//Total de elementos da pilha
}Pilha;

//Função que cria uma nova pilha na memória
Pilha* PilhaNovo(void){
    Pilha *p = malloc(sizeof(Pilha));
    
    if(p != NULL){
        p->Topo = NULL;
        p->Quantidade = 0;
    }
    return p;
}

//Insere valor na pilha informada
//Retorna 0 se erro 1 se sucesso
int PilhaInserir(Pilha *p, int valor){
    //se a pilha não existe, retorna erro
    if(p == NULL)
        return 0;

    NoPilha *novo = malloc(sizeof(NoPilha));
    //Se não houver espaço para um novo nó, retorna 0
    if(novo == NULL)
        return 0;

    novo->Valor = valor;
    novo->Proximo = p->Topo;
    
    //Se houver espaço retorna 1
    p->Topo = novo;
    p->Quantidade = p->Quantidade++;

    return 1;
}
