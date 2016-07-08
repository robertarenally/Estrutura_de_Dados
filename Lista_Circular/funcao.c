#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

Cir_Lista* inicializa (void)
{
    Cir_Lista *aux = (Cir_Lista*) malloc(sizeof(Cir_Lista));

    if (aux == NULL)
    {
        printf("\n Erro na alocacao de memoria.\n Encerrando...");
        exit(-1);
    }

    aux->inicio = NULL;
    aux->fim = NULL;
    aux->tamanho = 0;
    return aux;
}

Cir_Lista* insere_vazia(Cir_Lista *L, int info)
{
    Reg *novo_elemento = (Reg*) malloc(sizeof(Reg));

    if (novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memoria.\n Encerrando...");
        exit(-1);
    }
    novo_elemento->dado = info;
    novo_elemento->prox = novo_elemento;
    L->inicio = novo_elemento;
    L->fim = novo_elemento;
    L->tamanho++;
    return L;
}

Cir_Lista* insere_list_circ(Cir_Lista *L, Reg *corrente, int info)
{
    Reg *novo_elemento = (Reg*) malloc(sizeof(Reg));

    if (novo_elemento == NULL)
    {
        printf("\n Erro na alocacao de memoria.\n Encerrando...");
        exit(-1);
    }
    if (corrente != L->fim)
    {
        printf("\n Erro\n\n");
        return L;
    }
    novo_elemento->dado = info;
    novo_elemento->prox = corrente->prox;
    corrente->prox = novo_elemento;
    L->fim = novo_elemento;
    L->tamanho++;
    return L;
}

Cir_Lista* retira_inicio(Cir_Lista*L)
{
    if (L->tamanho < 2)
        return L;

    Reg *remove_el = L->inicio;
    L->inicio = L->inicio->prox;
    L->fim->prox = L->inicio;
    free(remove_el);
    L->tamanho--;
    return L;
}

Cir_Lista* retira_list_unico(Cir_Lista*L)
{
    if (L->tamanho != 1)
        return L;

    Reg *remove_el = L->inicio;
    L->inicio = NULL;
    L->fim = NULL;
    free(remove_el);
    L->tamanho--;
    return L;
}

void exibe(Cir_Lista*L)
{
    Reg *corrente = L->inicio;
    int i;

    for (i = 0; i < L->tamanho; i++)
    {
        printf("\n DADO = %d\n", corrente->dado);
        corrente = corrente->prox;
    }
}

void exibe_infinito(Cir_Lista*L)
{
    Reg *corrente = L->inicio;

    while (1)
    {
        printf("\n DADO = %d\n", corrente->dado);
        corrente = corrente->prox;
    }
}

void destroi(Cir_Lista*L)
{
    while (L->tamanho > 0)
    {
        if (L->tamanho > 1)
            retira_inicio(L);
        else
            retira_list_unico(L);
    }
    free(L);
}

int menu (Cir_Lista *lista){
    int escolha;
    printf("\n ********** MENU **********\n");
    if (lista->tamanho == 0){
        printf ("1. Adicao do primeiro elemento\n");
        printf ("2. Fechar\n");
    }else {
        printf ("1. Adicao de um elemento\n");
        printf ("2. Remocao no inicio (a lista deve ter pelo menos 2 elementos)\n");
        printf ("3. Remocao em uma lista com apenas um elemento\n");
        printf ("4. Exibe lista circular\n");
        printf ("5. Exibe lista circular [Ctrl+C] para fechar o programa\n");
        printf ("6. Fechar\n");
    }
    printf ("\n\n Faca sua escolha: ");
    scanf ("%d", &escolha);
    if(lista->tamanho == 0 && escolha == 2)
        escolha = 7;
    return escolha;
}
