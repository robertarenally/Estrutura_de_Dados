/********************************************* TAD de Arvore Binaria de busca *************************************************/

typedef struct noArv
{
    int dado;
    struct noArv *esq;
    struct noArv *dir;
}Arv_B;

/*******************************************************************************************************************************
* Nome: Inicializa
* Descri��o: Atribui NULL ao ponteiro da estrutura da arvore binaria, ou seja, cria uma arvore vazia;
* Assertiva de entrada: Nenhum
* Assertiva de sa�da: ponteiro para arvore binaria alocada;
********************************************************************************************************************************/
Arv_B* inicializa (void);

/*******************************************************************************************************************************
* Nome: cria_no
* Descri��o: aloca o espa�o na mem�ria para o n� da arvore, atribui o novo elemnto ao no criado e tamb�m atribui NULL para os
*            ponteiros que apontam para a esquerda e direita.
* Assertivas de entrada: int info (informa��o a ser armazenada);
* Assertivas de sa�da: ponteiro para a arvore binaria alocada;
********************************************************************************************************************************/
Arv_B* cria_no (int);

/*******************************************************************************************************************************
* Nome: insere
* Descri��o: insere um novo n� na arvore
* Assertivas de entrada: int info (informa��o a ser armazenada), ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: ponteiro para a arvore binaria alocada;
********************************************************************************************************************************/
Arv_B* insere (Arv_B*, int);

/*******************************************************************************************************************************
* Nome: exibe_em_ordem
* Descri��o: exibe a arvore binaria na tela em orgem: esquerda, raiz, direita;
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: nenhum;
********************************************************************************************************************************/
void exibe_em_ordem (Arv_B*);

/*******************************************************************************************************************************
* Nome: exibe_pre_ordem
* Descri��o: exibe a arvore binaria na tela em pr�-orgem: raiz, esquerda, direita;
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: nenhum;
********************************************************************************************************************************/
void exibe_pre_ordem (Arv_B*);

/*******************************************************************************************************************************
* Nome: exibe_pos_ordem
* Descri��o: exibe a arvore binaria na tela em orgem: esquerda, direita, raiz;
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: nenhum;
********************************************************************************************************************************/
void exibe_pos_ordem (Arv_B*);

/*******************************************************************************************************************************
* Nome: destroi
* Descri��o: desaloca o espa�o na mem�ria ocupado pela arvore bin�ria
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: nenhum;
********************************************************************************************************************************/
void destroi (Arv_B*);

/*******************************************************************************************************************************
* Nome: busca
* Descri��o: busca se um determinado elemento pertence a arvore;
* Assertivas de entrada: ponteiro para a arvore binaria alocada, int info (informa��o a ser procurada);
* Assertivas de sa�da: nenhum;
********************************************************************************************************************************/
void busca (Arv_B*, int);

/*******************************************************************************************************************************
* Nome: contar_nos
* Descri��o: conta quantos nos a arvore binaria possui
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: int quantidade_de_nos;
********************************************************************************************************************************/
int contar_nos (Arv_B*);

/*******************************************************************************************************************************
* Nome: contar_folhas
* Descri��o: conta quantas folhas a arvore binaria possui
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: int quantidade_de_folhas;
********************************************************************************************************************************/
int contar_folhas (Arv_B*);

/*******************************************************************************************************************************
* Nome: altura
* Descri��o: computa a altura da arvore binaria
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: int altura;
********************************************************************************************************************************/
int altura (Arv_B*);

/*******************************************************************************************************************************
* Nome: maior
* Descri��o: Fun��o auxiliar utilizada pela fun��o "altura", que verifica qual das entradas � a maior e
*            retorna a maior das entradas
* Assertivas de entrada: int a, int b;
* Assertivas de sa�da: int maior;
********************************************************************************************************************************/
int maior (int, int);

Arv_B* maiorDireita (Arv_B**);

Arv_B* menorEsquerda (Arv_B**);

/*******************************************************************************************************************************
* Nome: remover
* Descri��o: remove elemento da arvore bin�ria
* Assertivas de entrada: ponteiro para a arvore binaria alocada, int info (informa��o a ser deletada);
* Assertivas de sa�da: nenhum;
********************************************************************************************************************************/
void remover (Arv_B**, int);

/*******************************************************************************************************************************
* Nome: destroi
* Descri��o: desaloca o espa�o da mem�ria ocupado pela arvore bin�ria
* Assertivas de entrada: ponteiro para a arvore binaria alocada;
* Assertivas de sa�da: nenhum;
********************************************************************************************************************************/
void destroi(Arv_B *);
