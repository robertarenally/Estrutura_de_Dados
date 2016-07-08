#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

Lista* inicializacao (void)
{
    Lista *aux = (Lista*) malloc(sizeof(Lista));
    aux->Inicio = NULL;
    aux->Fim = NULL;
    aux->tamanho = 0;
    return aux;
}

Lista* insere_lista_vazia (Lista* L, int info)
{
    Reg *novo_elemento = (Reg*) malloc(sizeof(Reg));
    if ( novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memória!\n Encerrando ...");
        exit(-1);
    }
    novo_elemento->dado = info;
    novo_elemento->prox = NULL;
    L->Inicio = novo_elemento;
    L->Fim = novo_elemento;
    L->tamanho++;
    return L;
}

Lista* insere_no_inicio_da_lista (Lista* L, int info)
{
    Reg *novo_elemento = (Reg*) malloc(sizeof(Reg));
    if ( novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memória!\n Encerrando ...");
        exit(-1);
    }
    novo_elemento->dado = info;
    novo_elemento->prox = L->Inicio;
    L->Inicio = novo_elemento;
    L->tamanho++;
    return L;
}

Lista* insere_no_fim_da_lista(Lista* L, int info)
{
    Reg *novo_elemento = (Reg*) malloc(sizeof(Reg));
    if ( novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memória!\n Encerrando ...");
        exit(-1);
    }
    novo_elemento->dado = info;
    novo_elemento->prox = NULL;
    L->Fim->prox = novo_elemento;
    L->Fim = novo_elemento;
    L->tamanho++;
    return L;
}

Lista* insere_na_lista (Lista* L, int info, int posicao)
{
    Reg *Corrente, *novo_elemento;
    int i;
    if (L->tamanho < 2)
    {
        printf("\n Tamanho da Lista menor que 2!\n Encerrando ...");
        exit(-2);
    }
    else if (posicao < 1 || posicao > L->tamanho)
    {
        printf("\n Tamanho da lista: %d\n",L->tamanho);
        printf("\n Posicao: %d \n", posicao);
        printf("\n Posicao nao existe na lista!\n Encerrando ...");
        exit(-2);
    }
    Corrente = L->Inicio;
    for (i = 0; i < posicao; i++)
    {
        Corrente = Corrente->prox;
    }
    if (Corrente->prox == NULL)
    {
        printf("\n Posicao nao existe na lista!\n Encerrando ...");
        exit(-2);
    }
    novo_elemento = (Reg*) malloc(sizeof(Reg));
    if ( novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memória!\n Encerrando ...");
        exit(-1);
    }
    novo_elemento->dado = info;
    novo_elemento->prox = Corrente->prox;
    Corrente->prox = novo_elemento;
    L->tamanho++;
    return L;
}

Lista* retira_no_inicio (Lista* L)
{
    if (L->tamanho == 0)
        return L;

    Reg *inicio;
    inicio = L->Inicio;
    L->Inicio = L->Inicio->prox;

    if (L->tamanho == 1)
        L->Fim = NULL;

    free(inicio);
    L->tamanho--;
    return L;
}

Lista* retira_da_lista(Lista* L, int info, int posicao)
{
    Reg *Corrente, *aux;
    int i;
    if (L->tamanho < 2)
    {
        printf("\n Tamanho da Lista menor que 2!\n Encerrando ...");
        return L;
    }
    if (posicao < 1 || posicao > L->tamanho)
    {
        printf("\n Posicao nao existe na lista!\n");
        return L;
    }
    Corrente = L->Inicio;
    for (i = 0; i < posicao; i++)
    {
        Corrente = Corrente->prox;
    }
    aux = Corrente->prox;
    if (aux->dado != info)
    {
       printf("\n Posicao nao existe na lista!\n");
       return L;
    }
    Corrente->prox = Corrente->prox->prox;
    free(aux);
    L->tamanho--;
    return L;
}

void exibe (Lista *L)
{
    Reg* Corrente;

    Corrente = L->Inicio;

    while (Corrente != NULL)
    {
        printf("\n DADO = %d", Corrente->dado);
        Corrente = Corrente->prox;
    }
}

void destroi(Lista* L)
{
    Reg* Corrente, *Temp;

    Corrente = L->Inicio;

    while (Corrente != NULL)
    {
        Temp = Corrente;
        Corrente = Temp->prox;
        free(Temp);
    }
    free(L);
}
