/**** TAD da Fila ****/

typedef struct elemento
{
    int dado;
    struct elemento *prox;
}Reg;
//A lista criada possui cabeçalho:
typedef struct fila
{
    Reg* Inicio;
    Reg* Fim;
    int tamanho;
}Fila;

/*****************************************************************************************************************************
* Nome da função: inicializacao;
* Descrição: Aloca o espaço na memoria para a cabeça da fila e atribui NULL para os ponteiros que apontam para
*            o inicio e fim da fila e também atribui 0 para o tamanho da fila.
* Assertivas de entrada:
*            nenhuma
* Assertivas de Saída:
*           Fila alocada, com: Fila->inicio = NULL; e Fila->fim = NULL;
*****************************************************************************************************************************/
Fila* inicializacao (void);

/****************************************************************************************************************************
* Nome da função: insere fila vazia;
* Descrição: os ponteiros que apontam para o inicio e fim da fila passam a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a fila alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Fila->tamanho++;
*****************************************************************************************************************************/
Fila* insere_fila_vazia (Fila*, int);

/****************************************************************************************************************************
* Nome da função: insere_no_fim_da_fila;
* Descrição: o ponteiro que aponta para o fim da Fila passa a apontar para o novo elemento inserido na lista.
* Assertivas de Entrada:
*                       ponteiro para a fila alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da fila aumentou!
*                       Fila->tamanho++;
*****************************************************************************************************************************/
Fila* insere_no_fim_da_fila (Fila*, int);

/****************************************************************************************************************************
* Nome da função: retira_no_inicio;
* Descrição: retira o elemento que está no topo da Fila, onde o ponteiro que aponta para o inicio da fila passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a Fila alocada;
* Assertivas de Saída:
*                       tamannho da Fila diminuiu!
*                       Fila->tamanho--;
*****************************************************************************************************************************/
Fila* retira_no_inicio (Fila*);

/****************************************************************************************************************************
* Nome da função: exibe;
* Descrição: mostra na tela a fila;
* Assertivas de entrada: ponteiro para a fila alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe (Fila*);

/****************************************************************************************************************************
* Nome da função: desctroi;
* Descrição: desaloca a memória ocupada por toda a Fila;
* Assertivas de entrada: ponteiro para a fila alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Fila*);
