/**** TAD da Lista Encadeada Simples ****/

typedef struct elemento
{
    int dado;
    struct elemento *prox;
}Reg;
/** A lista criada possui cabe�alho:  **/
typedef struct lista
{
    Reg* Inicio;
    Reg* Fim;
    int tamanho;
}Lista;
/*****************************************************************************************************************************
* Nome da fun��o: inicializacao;
* Descri��o: Aloca o espa�o na memoria para o cabe�alho da lista e atribui NULL para os ponteiros que apontam para
*            o inicio e fim da lista e tamb�m atribui 0 para o tamanho da lista.
* Assertivas de entrada:
*            nenhuma
* Assertivas de Sa�da:
*           Lista alocada, com: Lista->inicio = NULL; e Lista->fim = NULL;
*****************************************************************************************************************************/
Lista* inicializacao (void);

/****************************************************************************************************************************
* Nome da fun��o: insere lista vazia;
* Descri��o: os ponteiros que apontam para o inicio e fim da lista passam a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_lista_vazia (Lista*, int);

/****************************************************************************************************************************
* Nome da fun��o: insere_no_inicio_da_lista;
* Descri��o: o ponteiro que aponta para o inicio da lista passa a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_no_inicio_da_lista (Lista*, int);

/****************************************************************************************************************************
* Nome da fun��o: insere_no_fim_da_lista;
* Descri��o: o ponteiro que aponta para o fim da lista passa a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_no_fim_da_lista (Lista*, int);

/****************************************************************************************************************************
* Nome da fun��o: insere_na_lista;
* Descri��o: insere na posicao solicitada pelo usu�rio. Onde o ponteiro localizado nessa posi��o da lista passa a apontar
*            para o novo elemento;
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
*                       int posicao;
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_na_lista (Lista*, int, int);

/****************************************************************************************************************************
* Nome da fun��o: retira_no_inicio;
* Descri��o: retira o elemento que est� no topo da lista, onde o ponteiro que aponta para o inicio da lista passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
* Assertivas de Sa�da:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Lista* retira_no_inicio (Lista*);

/****************************************************************************************************************************
* Nome da fun��o: retira_da_lista;
* Descri��o: retira o elemento na posicao solicitada pelo usu�rio.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser retirada);
*                       int posicao;
* Assertivas de Sa�da:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Lista* retira_da_lista (Lista*, int, int);

/****************************************************************************************************************************
* Nome da fun��o: exibe;
* Descri��o: mostra na tela a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe (Lista*);

/****************************************************************************************************************************
* Nome da fun��o: destroi;
* Descri��o: desaloca a mem�ria ocupada por toda a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Lista*);
