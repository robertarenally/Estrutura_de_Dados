#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

int main()
{
    int escolha = 0, info;
    Cir_Lista *L;

    L = inicializa();

    while (escolha != 6)
    {
        escolha = menu(L);
        switch (escolha){
            case 1:
                printf ("Digite novo elemento: ");
                scanf ("%d", &info);    ;
                if(L->tamanho == 0)
                    insere_vazia(L,info);
                else
                    insere_list_circ(L,L->fim,info);
                printf("\n Elemento inserido com sucesso\n");
                system("pause");
                system("cls");
                break;
            case 2:
                if(L->tamanho < 2)
                    break;
                retira_inicio(L);
                printf("\n Elemento retirado com sucesso\n");
                system("pause");
                system("cls");
                break;
            case 3:
                if(L->tamanho != 1)
                    break;
                retira_list_unico(L);
                printf("\n A lista esta vazia\n");
                system("pause");
                system("cls");
                break;
            case 4:
                exibe (L);
                system("pause");
                system("cls");
                break;
            case 5:
                exibe_infinito (L);
                break;
        }
    }
    destroi(L);
    return 0;
}
