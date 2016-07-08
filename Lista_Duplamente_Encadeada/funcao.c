#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

Dl_Lista* inicializa (void)
{
    Dl_Lista *aux = (Dl_Lista*) malloc(sizeof(Dl_Lista));
    aux->inicio = NULL;
    aux->fim = NULL;
    aux->tamanho = 0;
    return aux;
}

Dl_Lista* insere_lista_vazia(Dl_Lista*L, int info)
{
    Reg* novo_elemento = (Reg*) malloc(sizeof(Reg));

    if (novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memoria\n Encerrando ...");
        exit (-1);
    }
    novo_elemento->dado = info;
    novo_elemento->ant = L->inicio;
    novo_elemento->prox = L->fim;
    L->inicio = novo_elemento;
    L->fim = novo_elemento;
    L->tamanho++;
    return L;
}

Dl_Lista* insere_no_inicio (Dl_Lista*L, int info)
{
    Reg* novo_elemento = (Reg*) malloc(sizeof(Reg));

    if (novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memoria\n Encerrando ...");
        exit (-1);
    }
    novo_elemento->dado = info;
    novo_elemento->ant = NULL;
    novo_elemento->prox = L->inicio;
    L->inicio->ant = novo_elemento;
    L->inicio = novo_elemento;
    L->tamanho++;
    return L;
}

Dl_Lista* insere_no_fim (Dl_Lista*L, int info)
{
    Reg* novo_elemento = (Reg*) malloc(sizeof(Reg));

    if (novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memoria\n Encerrando ...");
        exit (-1);
    }
    novo_elemento->dado = info;
    novo_elemento->prox = NULL;
    novo_elemento->ant = L->fim;
    L->fim->prox = novo_elemento;
    L->fim = novo_elemento;
    L->tamanho++;
    return L;
}

Dl_Lista* insere_antes(Dl_Lista*L, int info, int posicao)
{
    Reg* novo_elemento = (Reg*) malloc(sizeof(Reg));
    Reg* corrente = L->inicio;
    int i;

    if (novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memoria\n Encerrando ...");
        exit (-1);
    }

    for ( i = 0; i < posicao; i ++){
        if (corrente != NULL)
             corrente = corrente->prox;
    }

    novo_elemento->dado = info;
    novo_elemento->prox = corrente;
    novo_elemento->ant = corrente->ant;

    if (corrente->ant == NULL)
        L->inicio = novo_elemento;
    else
        corrente->ant->prox = novo_elemento;

    corrente->ant = novo_elemento;
    L->tamanho++;
    return L;
}

Dl_Lista* insere_depois(Dl_Lista*L, int info, int posicao)
{
    Reg* novo_elemento = (Reg*) malloc(sizeof(Reg));
    Reg* corrente = L->inicio;
    int i;

    if (novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memoria\n Encerrando ...");
        exit (-1);
    }

    for ( i = 0; i < posicao; i ++)
        corrente = corrente->prox;

    novo_elemento->dado = info;
    novo_elemento->prox = corrente->prox;
    novo_elemento->ant = corrente;

    if (corrente->prox == NULL)
        L->fim = novo_elemento;
    else
        corrente->prox->ant = novo_elemento;

    corrente->prox = novo_elemento;
    L->tamanho++;
    return L;
}

Dl_Lista* remove_da_lista (Dl_Lista*L, int pos)
{
    Reg *remov, *corrente;
    int i;

    if (L->tamanho == 0)
    {
        printf("\n Lista vazia\n");
        return L;
    }
    //remoção no inicio da lista
    if (pos == 1)
    {
        remov = L->inicio;
        L->inicio = L->inicio->prox;

        if (L->inicio == NULL)
            L->fim = NULL;
        else
            L->inicio->ant = NULL;
    }
    else if (pos == L->tamanho)//remoção no final da lista
    {
        remov = L->fim;
        L->fim->ant->prox = NULL;
        L->fim = L->fim->ant;
    }
    else //remoção em qualquer lugar na lista
    {
        corrente = L->inicio;
        for (i = 1; i < pos; i++)
            corrente = corrente->prox;

        remov = corrente;
        corrente->ant->prox = corrente->prox;
        corrente->prox->ant = corrente->ant;
    }
    free(remov);
    L->tamanho--;
    return L;
}

void exibe_av(Dl_Lista *L)
{
    Reg *corrente = L->inicio;
    while(corrente != NULL)
    {
        printf("\n DADO = %d\n", corrente->dado);
        corrente = corrente->prox;
    }
}

void exibe_rec(Dl_Lista *L)
{
    Reg *corrente = L->fim;
    while(corrente != NULL)
    {
        printf("\n DADO = %d\n", corrente->dado);
        corrente = corrente->ant;
    }
}

void destroi(Dl_Lista *L)
{
    Reg *remove, *corrente = L->inicio;
    while (corrente != NULL)
    {
        remove = corrente;
        corrente = corrente->prox;
        free(remove);
    }
    free(L);
}
