#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"

int main()
{
    Lista *L1;
    int cc = 0, i = 0, dado, posicao;

    L1 = inicializacao();

while (cc != 7)
{
    printf("\n ****************************************************** \n");
    printf("\n                     Menu de Opcoes                     \n");
    printf("\n ****************************************************** \n");
    printf("\n 1 - Insere no inicio da lista");
    printf("\n 2 - Insere no fim da lista");
    printf("\n 3 - Insere em qualquer parte da lista");
    printf("\n 4 - Retira do inicio da lista");
    printf("\n 5 - Retira de qualquer parte da lista");
    printf("\n 6 - Exibe a lista na tela");
    printf("\n 7 - Para sair");
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
            L1 = insere_no_inicio_da_lista(L1, dado);
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
            L1 = insere_no_fim_da_lista(L1, dado);
        printf("\n Inserido com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 3:
        printf("\n Digite o numero a ser inserido na lista: ");
        scanf("%d", &dado);
        printf("\n Digite a posicao da lista: ");
        scanf("%d", &posicao);
        L1 = insere_na_lista(L1, dado, posicao);
        printf("\n Inserido com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 4:
        L1 = retira_no_inicio(L1);
        printf("\n Retirado com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 5:
        printf("\n Digite o numero a ser retirado da lista: ");
        scanf("%d", &dado);
        printf("\n Digite a posicao da lista: ");
        scanf("%d", &posicao);
        L1 = retira_da_lista(L1, dado, posicao);
        printf("\n Retirado com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 6:
        printf("\n Lista : \n");
        exibe(L1);
        printf("\n");
        system("pause");
        system("cls");
        break;
    case 7:
        cc = 7;
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
