#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

Arv_B* inicializa(void)
{
    return NULL;
}

Arv_B* cria_no(int info)
{
    Arv_B *aux = (Arv_B*)malloc(sizeof(Arv_B));
    aux->dado = info;
    aux->dir = aux->esq = NULL;
    return aux;
}

Arv_B* insere(Arv_B* raiz, int info)
{
    if (raiz == NULL)
        return cria_no(info);
    else
    {
        if (info < raiz->dado)
            raiz->esq = insere(raiz->esq, info);
        else
            raiz->dir = insere(raiz->dir, info);
    }
    return raiz;
}

void exibe_em_ordem(Arv_B*raiz)
{
    if (raiz != NULL)
    {
        exibe_em_ordem(raiz->esq);
        printf("\n %d\n", raiz->dado);
        exibe_em_ordem(raiz->dir);
    }
}

void exibe_pre_ordem(Arv_B*raiz)
{
    if (raiz != NULL)
    {
        printf("\n %d\n", raiz->dado);
        exibe_em_ordem(raiz->esq);
        exibe_em_ordem(raiz->dir);
    }
}

void exibe_pos_ordem(Arv_B*raiz)
{
    if (raiz != NULL)
    {
        exibe_em_ordem(raiz->esq);
        exibe_em_ordem(raiz->dir);
        printf("\n %d\n", raiz->dado);
    }
}

void busca(Arv_B *raiz, int info)
{
    if (raiz == NULL)
        printf("\n Arvore vazia!\n");
    else if (raiz->dado == info)
        printf("\n Elemento pertence a arvore\n");
    else if (raiz->dado > info)
        busca(raiz->esq, info);
    else
        busca(raiz->dir, info);
}

int contar_nos(Arv_B *pRaiz){
   if(pRaiz == NULL)
        return 0;
   else
        return (1 + contar_nos(pRaiz->esq) + contar_nos(pRaiz->dir));
}

int contar_folhas(Arv_B *pRaiz){
   if(pRaiz == NULL)
        return 0;
   if(pRaiz->esq == NULL && pRaiz->dir == NULL)
        return 1;
   return (contar_folhas(pRaiz->esq) + contar_folhas(pRaiz->dir));
}

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int altura(Arv_B *pRaiz){
   if((pRaiz == NULL) || (pRaiz->esq == NULL && pRaiz->dir == NULL))
       return 0;
   else
       return (1 + maior(altura(pRaiz->esq), altura(pRaiz->dir)));
}

Arv_B *MaiorDireita(Arv_B **no){
    if((*no)->dir != NULL)
       return MaiorDireita(&(*no)->dir);
    else{
       Arv_B *aux = *no;
       if((*no)->esq != NULL) // se nao houver essa verificacao, esse nó vai perder todos os seus filhos da esquerda!
          *no = (*no)->esq;
       else
          *no = NULL;
       return aux;
       }
}

Arv_B *MenorEsquerda(Arv_B **no){
    if((*no)->esq != NULL)
       return MenorEsquerda(&(*no)->esq);
    else{
       Arv_B *aux = *no;
       if((*no)->dir != NULL) // se nao houver essa verificacao, esse nó vai perder todos os seus filhos da direita!
          *no = (*no)->dir;
       else
          *no = NULL;
       return aux;
       }
}

void remover(Arv_B **pRaiz, int numero){
    if(*pRaiz == NULL){   // esta verificacao serve para caso o numero nao exista na arvore.
       printf("Numero nao existe na arvore!");
       return;
    }
    if(numero < (*pRaiz)->dado)
       remover(&(*pRaiz)->esq, numero);
    else
       if(numero > (*pRaiz)->dado)
          remover(&(*pRaiz)->dir, numero);
       else{    // se nao eh menor nem maior, logo, eh o numero que estou procurando! :)
          Arv_B *pAux = *pRaiz;     // quem programar no Embarcadero vai ter que declarar o pAux no inicio do void! :[
          if (((*pRaiz)->esq == NULL) && ((*pRaiz)->dir == NULL)){         // se nao houver filhos...
                free(pAux);
                (*pRaiz) = NULL;
               }
          else{     // so tem o filho da direita
             if ((*pRaiz)->esq == NULL){
                (*pRaiz) = (*pRaiz)->dir;
                pAux->dir = NULL;
                free(pAux); pAux = NULL;
                }
             else{            //so tem filho da esquerda
                if ((*pRaiz)->dir == NULL){
                    (*pRaiz) = (*pRaiz)->esq;
                    pAux->esq = NULL;
                    free(pAux); pAux = NULL;
                    }
                else{       //Escolhi fazer o maior filho direito da subarvore esquerda.
                   pAux = MaiorDireita(&(*pRaiz)->esq); //se vc quiser usar o Menor da esquerda, so o que mudaria seria isso:
                   pAux->esq = (*pRaiz)->esq;          //        pAux = MenorEsquerda(&(*pRaiz)->direita);
                   pAux->dir = (*pRaiz)->dir;
                   (*pRaiz)->esq = (*pRaiz)->dir = NULL;
                   free((*pRaiz));  *pRaiz = pAux;  pAux = NULL;
                   }
                }
             }
          }
}

void destroi(Arv_B *raiz)
{
    if (raiz != NULL)
    {
        destroi(raiz->esq);
        destroi(raiz->dir);
        free(raiz);
        raiz = NULL;
    }
}
