/********************************************* TAD de Arvore Binaria de busca *************************************************/

typedef struct noArv
{
    int dado;
    struct noArv *esq;
    struct noArv *dir;
}Arv_B;

/*******************************************************************************************************************************
* Nome: Inicializa
* Descrição: Atribui NULL ao ponteiro da estrutura da arvore binaria, ou seja, cria uma arvore vazia;
* Assertiva de entrada: Nenhum
* Assertiva de saída: ponteiro para arvore binaria alocada;
********************************************************************************************************************************/
Arv_B* inicializa (void);

/*******************************************************************************************************************************
* Nome: cria_no
* Descrição: aloca o espaço na memória para o nó da arvore, atribui o novo elemnto ao no criado e também atribui NULL para os
*            ponteiros que apontam para a esquerda e direita.
* Assertivas de entrada: int info (informação a ser armazenada);
* Assertivas de saída: ponteiro para a arvore binaria alocada;
********************************************************************************************************************************/
Arv_B* cria_no (int);

/*******************************************************************************************************************************
* Nome: insere
* Descrição: insere um novo nó na arvore
* Assertivas de entrada: int info (informação a ser armazenada), ponteiro para a arvore binaria alocada;
* Assertivas de saída: ponteiro para a arvore binaria alocada;
********************************************************************************************************************************/
Arv_B* insere (Arv_B*, int);

/*******************************************************************************************************************************
* Nome: exibe_em_ordem
* Descrição: exibe a arvore binaria na tela em orgem: esquerda, raiz, direita;
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: nenhum;
********************************************************************************************************************************/
void exibe_em_ordem (Arv_B*);

/*******************************************************************************************************************************
* Nome: exibe_pre_ordem
* Descrição: exibe a arvore binaria na tela em pré-orgem: raiz, esquerda, direita;
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: nenhum;
********************************************************************************************************************************/
void exibe_pre_ordem (Arv_B*);

/*******************************************************************************************************************************
* Nome: exibe_pos_ordem
* Descrição: exibe a arvore binaria na tela em orgem: esquerda, direita, raiz;
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: nenhum;
********************************************************************************************************************************/
void exibe_pos_ordem (Arv_B*);

/*******************************************************************************************************************************
* Nome: destroi
* Descrição: desaloca o espaço na memória ocupado pela arvore binária
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: nenhum;
********************************************************************************************************************************/
void destroi (Arv_B*);

/*******************************************************************************************************************************
* Nome: busca
* Descrição: busca se um determinado elemento pertence a arvore;
* Assertivas de entrada: ponteiro para a arvore binaria alocada, int info (informação a ser procurada);
* Assertivas de saída: nenhum;
********************************************************************************************************************************/
void busca (Arv_B*, int);

/*******************************************************************************************************************************
* Nome: contar_nos
* Descrição: conta quantos nos a arvore binaria possui
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: int quantidade_de_nos;
********************************************************************************************************************************/
int contar_nos (Arv_B*);

/*******************************************************************************************************************************
* Nome: contar_folhas
* Descrição: conta quantas folhas a arvore binaria possui
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: int quantidade_de_folhas;
********************************************************************************************************************************/
int contar_folhas (Arv_B*);

/*******************************************************************************************************************************
* Nome: altura
* Descrição: computa a altura da arvore binaria
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: int altura;
********************************************************************************************************************************/
int altura (Arv_B*);

/*******************************************************************************************************************************
* Nome: maior
* Descrição: Função auxiliar utilizada pela função "altura", que verifica qual das entradas é a maior e
*            retorna a maior das entradas
* Assertivas de entrada: int a, int b;
* Assertivas de saída: int maior;
********************************************************************************************************************************/
int maior (int, int);

Arv_B* maiorDireita (Arv_B**);

Arv_B* menorEsquerda (Arv_B**);

/*******************************************************************************************************************************
* Nome: remover
* Descrição: remove elemento da arvore binária
* Assertivas de entrada: ponteiro para a arvore binaria alocada, int info (informação a ser deletada);
* Assertivas de saída: nenhum;
********************************************************************************************************************************/
void remover (Arv_B**, int);

/*******************************************************************************************************************************
* Nome: destroi
* Descrição: desaloca o espaço da memória ocupado pela arvore binária
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de saída: nenhum;
********************************************************************************************************************************/
void destroi(Arv_B *);
