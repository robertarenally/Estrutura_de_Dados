/**** TAD da Lista Encadeada Simples ****/

typedef struct elemento
{
    int dado;
    struct elemento *prox;
}Reg;
/** A lista criada possui cabeçalho:  **/
typedef struct lista
{
    Reg* Inicio;
    Reg* Fim;
    int tamanho;
}Lista;
/*****************************************************************************************************************************
* Nome da função: inicializacao;
* Descrição: Aloca o espaço na memoria para o cabeçalho da lista e atribui NULL para os ponteiros que apontam para
*            o inicio e fim da lista e também atribui 0 para o tamanho da lista.
* Assertivas de entrada:
*            nenhuma
* Assertivas de Saída:
*           Lista alocada, com: Lista->inicio = NULL; e Lista->fim = NULL;
*****************************************************************************************************************************/
Lista* inicializacao (void);

/****************************************************************************************************************************
* Nome da função: insere lista vazia;
* Descrição: os ponteiros que apontam para o inicio e fim da lista passam a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_lista_vazia (Lista*, int);

/****************************************************************************************************************************
* Nome da função: insere_no_inicio_da_lista;
* Descrição: o ponteiro que aponta para o inicio da lista passa a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_no_inicio_da_lista (Lista*, int);

/****************************************************************************************************************************
* Nome da função: insere_no_fim_da_lista;
* Descrição: o ponteiro que aponta para o fim da lista passa a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_no_fim_da_lista (Lista*, int);

/****************************************************************************************************************************
* Nome da função: insere_na_lista;
* Descrição: insere na posicao solicitada pelo usuário. Onde o ponteiro localizado nessa posição da lista passa a apontar
*            para o novo elemento;
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
*                       int posicao;
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Lista* insere_na_lista (Lista*, int, int);

/****************************************************************************************************************************
* Nome da função: retira_no_inicio;
* Descrição: retira o elemento que está no topo da lista, onde o ponteiro que aponta para o inicio da lista passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
* Assertivas de Saída:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Lista* retira_no_inicio (Lista*);

/****************************************************************************************************************************
* Nome da função: retira_da_lista;
* Descrição: retira o elemento na posicao solicitada pelo usuário.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser retirada);
*                       int posicao;
* Assertivas de Saída:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Lista* retira_da_lista (Lista*, int, int);

/****************************************************************************************************************************
* Nome da função: exibe;
* Descrição: mostra na tela a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe (Lista*);

/****************************************************************************************************************************
* Nome da função: destroi;
* Descrição: desaloca a memória ocupada por toda a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Lista*);
