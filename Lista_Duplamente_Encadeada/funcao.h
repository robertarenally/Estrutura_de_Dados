/************************* TAD da Lista Duplamente Encadeada  ************************************************/

typedef struct elemento
{
    int dado;
    struct elemento *ant;
    struct elemento *prox;
}Reg;
//Cabeça da lista
typedef struct lista
{
    Reg *inicio;
    Reg *fim;
    int tamanho;
}Dl_Lista;

/*****************************************************************************************************************************
* Nome da função: inicializa;
* Descrição: Aloca o espaço na memoria para a cabeça da lista e atribui NULL para os ponteiros que apontam para
*            o inicio e fim da lista e também atribui 0 para o tamanho da lista.
* Assertivas de entrada:
*            nenhuma
* Assertivas de Saída:
*           Lista alocada, com: Lista->inicio = NULL; e Lista->fim = NULL;
*****************************************************************************************************************************/
Dl_Lista* inicializa (void);

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
Dl_Lista* insere_lista_vazia (Dl_Lista*, int);

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
Dl_Lista* insere_no_inicio (Dl_Lista*, int);

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
Dl_Lista* insere_no_fim (Dl_Lista*, int);

/****************************************************************************************************************************
* Nome da função: insere_antes;
* Descrição: insere antes de uma determinada posição na lista
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Dl_Lista* insere_antes (Dl_Lista*, int, int);

/****************************************************************************************************************************
* Nome da função: insere_depois;
* Descrição: insere depois de uma determinada posição na lista
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*****************************************************************************************************************************/
Dl_Lista* insere_depois (Dl_Lista*, int, int);

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
Dl_Lista* remove_da_lista (Dl_Lista*, int);

/****************************************************************************************************************************
* Nome da função: exibe_av;
* Descrição: mostra na tela a lista avançando nos ponteiros que pontam para o proximo elemento;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe_av (Dl_Lista*);

/****************************************************************************************************************************
* Nome da função: exibe_rec;
* Descrição: mostra na tela a lista recuando nos ponteiros que pontam para o elemento anterior;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe_rec (Dl_Lista*);

/****************************************************************************************************************************
* Nome da função: desctroi;
* Descrição: desaloca a memória ocupada por toda a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Dl_Lista*);
