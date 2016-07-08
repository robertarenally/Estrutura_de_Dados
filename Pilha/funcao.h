/*****************  TAD da Pilha  *************************/

/*estrutura do campo da pilha
** onde será armazenado as informações*/
typedef struct campopilha {
	int dados;
	struct campopilha *prox;
}Campo;

/*Cabeçalho da pilha*/
typedef struct pilha {
	Campo *topo;
}Pilha;

/*****************************************************************************************************************************
* Nome da função: inicializa;
* Descrição: Aloca o espaço na memoria para a cabeça da pilha e atribui NULL para o ponteiro que apontam para
*            o topo da pilha
* Assertivas de entrada:
*            nenhuma
* Assertivas de Saída:
*           Pilha alocada, com: Pilha->inicio = NULL;
*****************************************************************************************************************************/
Pilha* inicializa (void);

/*****************************************************************************************************************************
* Nome da função: criaCampo;
* Descrição: Aloca o espaço na memoria para o campo da pilha e atribui o elemento a ser inserido.
* Assertivas de entrada:
*            int info;
* Assertivas de Saída:
*           Campo da pilha alocada;
*****************************************************************************************************************************/
Campo* criaCampo (int);

/****************************************************************************************************************************
* Nome da função: push;
* Descrição: insere na pilha, onde o ponteiro que aponta para o topo da pilha passa a apontar para o novo elemento
*               inserido na pilha.
* Assertivas de Entrada:
*                       ponteiro para a pilha alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da pilha aumentou!
*****************************************************************************************************************************/
Pilha* push (Pilha*, int );

/****************************************************************************************************************************
* Nome da função: pop;
* Descrição: retira o elemento que está no topo da pilha, onde o ponteiro que aponta para o inicio da oilha passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a pilha alocada;
* Assertivas de Saída:
*                       tamannho da pilha diminuiu!
*                       Pilha->tamanho--;
*****************************************************************************************************************************/
Pilha* pop (Pilha*);

/****************************************************************************************************************************
* Nome da função: Top;
* Descrição: retorna o elemento que está no topo da pilha
* Assertivas de Entrada:
*                       ponteiro para a pilha alocada;
* Assertivas de Saída:
*                       int primeiro elemento;
*****************************************************************************************************************************/
int Top (Pilha*);

/****************************************************************************************************************************
* Nome da função: imprime_pilha;
* Descrição: mostra na tela a pilha;
* Assertivas de entrada: ponteiro para a pilha alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void imprime_pilha (Pilha*);

/****************************************************************************************************************************
* Nome da função: desaloca_pilha;
* Descrição: desaloca a memória ocupada por toda a Pilha;
* Assertivas de entrada: ponteiro para a pilha alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void desaloca_pilha (Pilha*);
