/*****************  TAD da Pilha  *************************/

/*estrutura do campo da pilha
** onde ser� armazenado as informa��es*/
typedef struct campopilha {
	int dados;
	struct campopilha *prox;
}Campo;

/*Cabe�alho da pilha*/
typedef struct pilha {
	Campo *topo;
}Pilha;

/*****************************************************************************************************************************
* Nome da fun��o: inicializa;
* Descri��o: Aloca o espa�o na memoria para a cabe�a da pilha e atribui NULL para o ponteiro que apontam para
*            o topo da pilha
* Assertivas de entrada:
*            nenhuma
* Assertivas de Sa�da:
*           Pilha alocada, com: Pilha->inicio = NULL;
*****************************************************************************************************************************/
Pilha* inicializa (void);

/*****************************************************************************************************************************
* Nome da fun��o: criaCampo;
* Descri��o: Aloca o espa�o na memoria para o campo da pilha e atribui o elemento a ser inserido.
* Assertivas de entrada:
*            int info;
* Assertivas de Sa�da:
*           Campo da pilha alocada;
*****************************************************************************************************************************/
Campo* criaCampo (int);

/****************************************************************************************************************************
* Nome da fun��o: push;
* Descri��o: insere na pilha, onde o ponteiro que aponta para o topo da pilha passa a apontar para o novo elemento
*               inserido na pilha.
* Assertivas de Entrada:
*                       ponteiro para a pilha alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da pilha aumentou!
*****************************************************************************************************************************/
Pilha* push (Pilha*, int );

/****************************************************************************************************************************
* Nome da fun��o: pop;
* Descri��o: retira o elemento que est� no topo da pilha, onde o ponteiro que aponta para o inicio da oilha passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a pilha alocada;
* Assertivas de Sa�da:
*                       tamannho da pilha diminuiu!
*                       Pilha->tamanho--;
*****************************************************************************************************************************/
Pilha* pop (Pilha*);

/****************************************************************************************************************************
* Nome da fun��o: Top;
* Descri��o: retorna o elemento que est� no topo da pilha
* Assertivas de Entrada:
*                       ponteiro para a pilha alocada;
* Assertivas de Sa�da:
*                       int primeiro elemento;
*****************************************************************************************************************************/
int Top (Pilha*);

/****************************************************************************************************************************
* Nome da fun��o: imprime_pilha;
* Descri��o: mostra na tela a pilha;
* Assertivas de entrada: ponteiro para a pilha alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void imprime_pilha (Pilha*);

/****************************************************************************************************************************
* Nome da fun��o: desaloca_pilha;
* Descri��o: desaloca a mem�ria ocupada por toda a Pilha;
* Assertivas de entrada: ponteiro para a pilha alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void desaloca_pilha (Pilha*);
