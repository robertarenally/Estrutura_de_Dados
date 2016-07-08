/************************* TAD da Lista Duplamente Encadeada  ************************************************/

typedef struct elemento
{
    int dado;
    struct elemento *ant;
    struct elemento *prox;
}Reg;
//Cabe�a da lista
typedef struct lista
{
    Reg *inicio;
    Reg *fim;
    int tamanho;
}Dl_Lista;

/*****************************************************************************************************************************
* Nome da fun��o: inicializa;
* Descri��o: Aloca o espa�o na memoria para a cabe�a da lista e atribui NULL para os ponteiros que apontam para
*            o inicio e fim da lista e tamb�m atribui 0 para o tamanho da lista.
* Assertivas de entrada:
*            nenhuma
* Assertivas de Sa�da:
*           Lista alocada, com: Lista->inicio = NULL; e Lista->fim = NULL;
*****************************************************************************************************************************/
Dl_Lista* inicializa (void);

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
Dl_Lista* insere_lista_vazia (Dl_Lista*, int);

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
Dl_Lista* insere_no_inicio (Dl_Lista*, int);

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
Dl_Lista* insere_no_fim (Dl_Lista*, int);

/****************************************************************************************************************************
* Nome da fun��o: insere_antes;
* Descri��o: insere antes de uma determinada posi��o na lista
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Dl_Lista* insere_antes (Dl_Lista*, int, int);

/****************************************************************************************************************************
* Nome da fun��o: insere_depois;
* Descri��o: insere depois de uma determinada posi��o na lista
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Sa�da:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Dl_Lista* insere_depois (Dl_Lista*, int, int);

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
Dl_Lista* remove_da_lista (Dl_Lista*, int);

/****************************************************************************************************************************
* Nome da fun��o: exibe_av;
* Descri��o: mostra na tela a lista avan�ando nos ponteiros que pontam para o proximo elemento;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe_av (Dl_Lista*);

/****************************************************************************************************************************
* Nome da fun��o: exibe_rec;
* Descri��o: mostra na tela a lista recuando nos ponteiros que pontam para o elemento anterior;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe_rec (Dl_Lista*);

/****************************************************************************************************************************
* Nome da fun��o: desctroi;
* Descri��o: desaloca a mem�ria ocupada por toda a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Dl_Lista*);
