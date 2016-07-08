/**************************************** TAD de uma Lista Circular ********************************************************/

typedef struct elemento
{
    int dado;
    struct elemento *prox;
}Reg;

/** Cabe�alho da lista **/
typedef struct lista
{
    Reg *inicio;
    Reg *fim;
    int tamanho;
}Cir_Lista;

/********************************************************************************************************************************
* Nome da fun��o: Inicializa
* Descri��o:
*           Aloca o espa�o na mem�ria para o cabe�alho da lista e atribui NULL para os ponteiros que apontam para o inicio e fim
*           da lista. Alpem disso, inicializa o tamanho da lista com 0;
* Assertivas de Entrada:
*                       Nenhum
* Assertivas de Sa�da:
*           Lista alocada, com: Lista->inicio = NULL; e Lista->fim = NULL;
*********************************************************************************************************************************/
Cir_Lista* inicializa (void);

/********************************************************************************************************************************
* Nome da fun��o: Insere_vazia
* Descri��o:
*           Aloca o espa�o na mem�ria para o novo elemento da lista e os ponteiros que pontam para o inicio e fim da lista passam
*           a pontar para o novo elemento inserido.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*********************************************************************************************************************************/
Cir_Lista* insere_vazia (Cir_Lista*, int);

/********************************************************************************************************************************
* Nome da fun��o: insere_list_circ
* Descri��o:
*           Aloca o espa�o na mem�ria para o novo elemento da lista e o insere em qualquer posi��o da lista circular
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*********************************************************************************************************************************/
Cir_Lista* insere_list_circ (Cir_Lista*, Reg*, int);

/****************************************************************************************************************************
* Nome da fun��o: retira_inicio;
* Descri��o: retira o elemento que est� no topo da lista, onde o ponteiro que aponta para o inicio da lista passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
* Assertivas de Sa�da:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Cir_Lista* retira_inicio (Cir_Lista*);

/****************************************************************************************************************************
* Nome da fun��o: retira_list_unico
* Descri��o: retira um unico elemento da lista
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
* Assertivas de Sa�da:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Cir_Lista* retira_list_unico (Cir_Lista*);

/****************************************************************************************************************************
* Nome da fun��o: exibe;
* Descri��o: mostra na tela a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe (Cir_Lista*);

/****************************************************************************************************************************
* Nome da fun��o: exibe_infinito;
* Descri��o: mostra na tela a lista em um loop infinito;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe_infinito (Cir_Lista*);

/****************************************************************************************************************************
* Nome da fun��o: destroi;
* Descri��o: desaloca a mem�ria ocupada por toda a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Cir_Lista*);

/********************************************************************************************************************************
* Nome: menu;
* Descri��o: cria a interface do menu de op��es das opera��es da lista circular
* Assertivas de Entrada: ponteiro para a lista alocada;
* Assertivas de Sa�da: retorna um numero que representa a escolha que o usu�rio fez.
*********************************************************************************************************************************/
int menu(Cir_Lista*);
