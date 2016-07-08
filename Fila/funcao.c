#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

Fila* inicializacao (void)
{
    Fila *aux = (Fila*) malloc(sizeof(Fila));
    aux->Inicio = NULL;
    aux->Fim = NULL;
    aux->tamanho = 0;
    return aux;
}

Fila* insere_fila_vazia (Fila* L, int info)
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

Fila* insere_no_fim_da_fila (Fila* L, int info)
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

Fila* retira_no_inicio (Fila* L)
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

void exibe (Fila *L)
{
    Reg* Corrente;

    Corrente = L->Inicio;

    while (Corrente != NULL)
    {
        printf("\n DADO = %d", Corrente->dado);
        Corrente = Corrente->prox;
    }
}

void destroi(Fila* L)
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
