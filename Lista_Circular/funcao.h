/**************************************** TAD de uma Lista Circular ********************************************************/

typedef struct elemento
{
    int dado;
    struct elemento *prox;
}Reg;

/** Cabeçalho da lista **/
typedef struct lista
{
    Reg *inicio;
    Reg *fim;
    int tamanho;
}Cir_Lista;

/********************************************************************************************************************************
* Nome da função: Inicializa
* Descrição:
*           Aloca o espaço na memória para o cabeçalho da lista e atribui NULL para os ponteiros que apontam para o inicio e fim
*           da lista. Alpem disso, inicializa o tamanho da lista com 0;
* Assertivas de Entrada:
*                       Nenhum
* Assertivas de Saída:
*           Lista alocada, com: Lista->inicio = NULL; e Lista->fim = NULL;
*********************************************************************************************************************************/
Cir_Lista* inicializa (void);

/********************************************************************************************************************************
* Nome da função: Insere_vazia
* Descrição:
*           Aloca o espaço na memória para o novo elemento da lista e os ponteiros que pontam para o inicio e fim da lista passam
*           a pontar para o novo elemento inserido.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*********************************************************************************************************************************/
Cir_Lista* insere_vazia (Cir_Lista*, int);

/********************************************************************************************************************************
* Nome da função: insere_list_circ
* Descrição:
*           Aloca o espaço na memória para o novo elemento da lista e o insere em qualquer posição da lista circular
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
*                       int info; (a ser armazenada);
* Assertivas de Saída:
*                       tamannho da lista aumentou!
*                       Lista->tamanho++;
*********************************************************************************************************************************/
Cir_Lista* insere_list_circ (Cir_Lista*, Reg*, int);

/****************************************************************************************************************************
* Nome da função: retira_inicio;
* Descrição: retira o elemento que está no topo da lista, onde o ponteiro que aponta para o inicio da lista passa a apontar
*            para o proximo elemento.
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
* Assertivas de Saída:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Cir_Lista* retira_inicio (Cir_Lista*);

/****************************************************************************************************************************
* Nome da função: retira_list_unico
* Descrição: retira um unico elemento da lista
* Assertivas de Entrada:
*                       ponteiro para a lista alocada;
* Assertivas de Saída:
*                       tamannho da lista diminuiu!
*                       Lista->tamanho--;
*****************************************************************************************************************************/
Cir_Lista* retira_list_unico (Cir_Lista*);

/****************************************************************************************************************************
* Nome da função: exibe;
* Descrição: mostra na tela a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe (Cir_Lista*);

/****************************************************************************************************************************
* Nome da função: exibe_infinito;
* Descrição: mostra na tela a lista em um loop infinito;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void exibe_infinito (Cir_Lista*);

/****************************************************************************************************************************
* Nome da função: destroi;
* Descrição: desaloca a memória ocupada por toda a lista;
* Assertivas de entrada: ponteiro para a lista alocada;
* Assertivas de saida: nenhuma.
*****************************************************************************************************************************/
void destroi (Cir_Lista*);

/********************************************************************************************************************************
* Nome: menu;
* Descrição: cria a interface do menu de opções das operações da lista circular
* Assertivas de Entrada: ponteiro para a lista alocada;
* Assertivas de Saída: retorna um numero que representa a escolha que o usuário fez.
*********************************************************************************************************************************/
int menu(Cir_Lista*);
