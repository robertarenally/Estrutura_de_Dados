#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcao.h"

int main (){

	int controle=0, info;
	Pilha*monte;

	monte = inicializa();

	while (controle != 5)
	{
		printf("*******************************\n");
		printf("       Digite uma opcao        \n");
		printf("*******************************\n");
		printf("(1) -Inserir na pilha\n");
		printf("(2) -Retirar da pilha\n");
		printf("(3) -Imprimir na tela o topo da pilha\n");
		printf("(4) -Imprimir toda a pilha na tela\n");
		printf("(5) -Terminar a execucao do programa\n");
		printf("Digite uma opcao: ");
		scanf(" %d",&controle);

		switch (controle)
		{
        case 1:
            printf("\n Digite o dado: ");
			scanf(" %d", &info);
			monte = push(monte, info);
			printf("\n Inserido com sucesso\n");
            system("pause");
            system("cls");
            break;
        case 2:
            monte = pop(monte);
            printf("\n Retirado com sucesso\n");
            system("pause");
            system("cls");
            break;
        case 3:
            info = Top(monte);
			/*Código de erro*/
			if (info == 13121996)
				printf("\n Pilha vazia \n");
			else
				printf("\n Topo da pilha = %d\n", info);
            system("pause");
            system("cls");
            break;
        case 4:
            imprime_pilha(monte);
            printf("\n");
            system("pause");
            system("cls");
            break;
        case 5:
            controle = 5;
            break;
        default:
            printf("\n Opcao invalida!\n Escolha uma das opcoes acima!");
            system("pause");
            system("cls");
		}
	}
	desaloca_pilha(monte);
	return 0;
}
