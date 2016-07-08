#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

int main()
{
    Dl_Lista *L1;
    int cc = 0, i = 0, dado, posicao;

    L1 = inicializa();

while (cc != 8)
{
    printf("\n ****************************************************** \n");
    printf("\n                     Menu de Opcoes                     \n");
    printf("\n ****************************************************** \n");
    printf("\n 1 - Insere no inicio da lista");
    printf("\n 2 - Insere no fim da lista");
    printf("\n 3 - Insere antes de uma posicao na lista");
    printf("\n 4 - Insere depois de uma posicao na lista");
    printf("\n 5 - Retira de qualquer parte da lista");
    printf("\n 6 - Exibe a lista na tela avancando");
    printf("\n 7 - Exibe a lista na tela recuando");
    printf("\n 8 - Para sair");
    printf("\n\n Escolha uma opcao: ");
    scanf("%d", &cc);

    switch (cc)
    {
    case 1:
        printf("\n Digite o numero a ser inserido na lista: ");
        scanf("%d", &dado);
        if (i == 0)
        {
            L1 = insere_lista_vazia(L1, dado);
            i++;
        }else
            L1 = insere_no_inicio(L1, dado);
        printf("\n Inserido com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 2:
        printf("\n Digite o numero a ser inserido na lista: ");
        scanf("%d", &dado);
        if (i == 0)
        {
            L1 = insere_lista_vazia(L1, dado);
            i++;
        }else
            L1 = insere_no_fim(L1, dado);
        printf("\n Inserido com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 3:
        printf("\n Digite o numero a ser inserido na lista: ");
        scanf("%d", &dado);
        printf("\n Digite a posicao da lista: ");
        scanf("%d", &posicao);
        L1 = insere_antes(L1, dado, posicao);
        printf("\n Inserido com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 4:
        printf("\n Digite o numero a ser inserido na lista: ");
        scanf("%d", &dado);
        printf("\n Digite a posicao da lista: ");
        scanf("%d", &posicao);
        L1 = insere_depois(L1, dado, posicao);
        printf("\n Inserido com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 5:
        printf("\n Digite a posicao da lista: ");
        scanf("%d", &posicao);
        L1 = remove_da_lista(L1, posicao);
        printf("\n Retirado com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 6:
        printf("\n Lista avancando: \n");
        exibe_av(L1);
        printf("\n");
        system("pause");
        system("cls");
        break;
    case 7:
        printf("\n Lista recuando: \n");
        exibe_rec(L1);
        printf("\n");
        system("pause");
        system("cls");
        break;
    case 8:
        cc = 8;
        break;
    default:
        printf("\n Opcao invalida!\n Escolha uma das opcoes acima!");
        system("pause");
        system("cls");
    }
}
    destroi(L1);
    return 0;
}
