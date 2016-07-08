#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main()
{
    int escolha = 0, num;
    Arv_B *raiz;
    raiz = inicializa();

    while (escolha != 10)
    {
        printf("\n 1 - Inserir elemento na arvore");
        printf("\n 2 - Visualizar arvore em ordem");
        printf("\n 3 - Visualizar arvore em pre-ordem");
        printf("\n 4 - Visualizar arvore em pos-ordem");
        printf("\n 5 - Buscar elemento na arvore");
        printf("\n 6 - Contar o numero de nos na arvore");
        printf("\n 7 - Contar o numero de folhas na arvore");
        printf("\n 8 - Remover um elemento da lista");
        printf("\n 9 - Altura da arvore");
        printf("\n 10 - Fechar o programa");
        printf("\n\n Digite sua escolha: ");
        scanf("%d", &escolha);

        switch (escolha)
        {
            case 1:
                printf("\n Digite um numero: ");
                scanf("%d", &num);
                raiz = insere(raiz, num);
                printf("\n Inserido com sucesso\n");
                system("pause");
                system("cls");
                break;
            case 2:
                printf("\n\n Em ordem\n\n");
                exibe_em_ordem(raiz);
                system("pause");
                system("cls");
                break;
            case 3:
                printf("\n\n Pre ordem\n\n");
                exibe_pre_ordem(raiz);
                system("pause");
                system("cls");
                break;
            case 4:
                printf("\n\n Pos ordem\n\n");
                exibe_pos_ordem(raiz);
                system("pause");
                system("cls");
                break;
            case 5:
                printf("\n Digite o numero a ser buscado: ");
                scanf("%d", &num);
                busca(raiz, num);
                system("pause");
                system("cls");
                break;
            case 6:
                num = contar_nos(raiz);
                printf("\n Numero de nos da arvore = %d\n", num);
                system("pause");
                system("cls");
                break;
            case 7:
                num = contar_folhas(raiz);
                printf("\n Numero de folhas da arvore = %d\n", num);
                system("pause");
                system("cls");
                break;
            case 8:
                printf("\n Digite o numero a ser removido: ");
                scanf("%d", &num);
                remover(&raiz, num);
                system("pause");
                system("cls");
                break;
            case 9:
                num = altura(raiz);
                printf("\n Altura da arvore = %d\n", num);
                system("pause");
                system("cls");
                break;
        }
    }
    destroi(raiz);
    return 0;
}
