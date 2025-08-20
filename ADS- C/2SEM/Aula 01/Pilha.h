//Arquivo com implementa��o de uma pilha

//Estrutura que representa um n� de uma pilha de inteiros
typedef struct NoPilha {
    int Valor; //valor do n�
    struct NoPilha * Proximo; //endere�o de mem�ria do pr�ximo elemento
}NoPilha;

//Estrutura que representa uma pilha de inteiros
typedef struct {
    NoPilha *Topo; //Endere�o de mem�ria do topo da pilha
    int Quantidade;//Total de elementos da pilha
}Pilha;

//Fun��o que cria uma nova pilha na mem�ria
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
    //se a pilha n�o existe, retorna erro
    if(p == NULL)
        return 0;

    NoPilha *novo = malloc(sizeof(NoPilha));
    //Se n�o houver espa�o para um novo n�, retorna 0
    if(novo == NULL)
        return 0;

    novo->Valor = valor;
    novo->Proximo = p->Topo;
    
    //Se houver espa�o retorna 1
    p->Topo = novo;
    p->Quantidade = p->Quantidade++;

    return 1;
}
