#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

int main()
{
    Fila *L1;
    int cc = 0, i = 0, dado;

    L1 = inicializacao();

while (cc != 4)
{
    printf("\n ****************************************************** \n");
    printf("\n                     Menu de Opcoes                     \n");
    printf("\n ****************************************************** \n");
    printf("\n 1 - Insere na fila");
    printf("\n 2 - Retira da fila");
    printf("\n 3 - Exibe a fila na tela");
    printf("\n 4 - Para sair");
    printf("\n\n Escolha uma opcao: ");
    scanf("%d", &cc);

    switch (cc)
    {
    case 1:
        printf("\n Digite o numero a ser inserido na lista: ");
        scanf("%d", &dado);
        if (i == 0)
        {
            L1 = insere_fila_vazia(L1, dado);
            i++;
        }else
            L1 = insere_no_fim_da_fila(L1, dado);
        printf("\n Inserido com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 2:
        L1 = retira_no_inicio(L1);
        printf("\n Retirado com sucesso\n");
        system("pause");
        system("cls");
        break;
    case 3:
        printf("\n **** Fila **** \n");
        exibe(L1);
        printf("\n");
        system("pause");
        system("cls");
        break;
    case 4:
        cc = 4;
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
