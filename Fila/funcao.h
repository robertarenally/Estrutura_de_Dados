/**** TAD da Fila ****/

typedef struct elemento
{
    int dado;
    struct elemento *prox;
}Reg;
//A lista criada possui cabe�alho:
typedef struct fila
{
    Reg* Inicio;
    Reg* Fim;
    int tamanho;
}Fila;

/*****************************************************************************************************************************
* Nome da fun��o: inicializacao;
* Descri��o: Aloca o espa�o na memoria para a cabe�a da fila e atribui NULL para os ponteiros que apontam para
*            o inicio e fim da fila e tamb�m atribui 0 para o tamanho da fila.
* Assertivas de entrada:
*            nenhuma
* Assertivas de Sa�da:
*           Fila alocada, com: Fila->inicio = NULL; e Fila->fim = NULL;
*****************************************************************************************************************************/
Fila* inicializacao (void);

/****************************************************************************************************************************
* Nome da fun��o: insere fila vazia;
* Descri��o: os ponteiros que apontam para o inicio e fim da fila passam a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a fila alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Fila->tamanho++;
*****************************************************************************************************************************/
Fila* insere_fila_vazia (Fila*, int);

/****************************************************************************************************************************
* Nome da fun��o: insere_no_fim_da_fila;
* Descri��o: o ponteiro que aponta para o fim da Fila passa a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a fila alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da fila aumentou!
*                       Fila->tamanho++;
*****************************************************************************************************************************/
Fila* insere_no_fim_da_fila (Fila*, int);

/****************************************************************************************************************************
* Nome da fun��o: retira_no_inicio;
* Descri��o: retira o elemento que est� no topo da Fila, onde o ponteiro que aponta para o inicio da fila passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a Fila alocada;
* Assertivas de Sa�da:
*                       tamannho da Fila diminuiu!
*                       Fila->tamanho--;
*****************************************************************************************************************************/
Fila* retira_no_inicio (Fila*);

/****************************************************************************************************************************
* Nome da fun��o: exibe;
* Descri��o: mostra na tela a fila;
* Assertivas de entrada: ponteiro para a fila alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe (Fila*);

/****************************************************************************************************************************
* Nome da fun��o: desctroi;
* Descri��o: desaloca a mem�ria ocupada por toda a Fila;
* Assertivas de entrada: ponteiro para a fila alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Fila*);
