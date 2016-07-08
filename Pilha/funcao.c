#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

Pilha* inicializa(void){
	Pilha*aux = (Pilha*) malloc(sizeof(Pilha));
	aux->topo = NULL;
	return aux;
}

Campo* criaCampo(int dado){
	Campo*aux = (Campo*) malloc(sizeof(Campo));
	aux->dados = dado;
	aux->prox = NULL;
	return aux;
}

Pilha* push(Pilha *monte, int dado){
	Campo*novo = criaCampo(dado);
	novo->prox = monte->topo;
	monte->topo = novo;
	return monte;
}

Pilha* pop(Pilha*monte){
	if (monte->topo == NULL){
		printf("\n Pilha vazia \n");
		return monte;
	}
	Campo*remov_elemento;
	remov_elemento = monte->topo;
	monte->topo = monte->topo->prox;
	free(remov_elemento);
	printf("\n Elemento retirado do topo da pilha \n");
	return monte;
}

int Top(Pilha*monte){
	if (monte->topo == NULL)
		return 13121996;

	Campo*aux = monte->topo;
	int info = aux->dados;
	return info;
}

void imprime_pilha(Pilha*monte){
	Campo*em_curso = monte->topo;
	if (monte->topo == NULL){
		printf("\n Pilha vazia \n");
		return;
	}
	printf("\n Impressao de toda a pilha na tela\n");
	while(em_curso != NULL)
	{
		printf("%d\n",em_curso->dados);
		em_curso = em_curso->prox;
	}
}

void desaloca_pilha(Pilha*monte){
	if (monte == NULL)
		return;

	Campo*em_curso = monte->topo, *temp;

	while(em_curso != NULL)
	{
		temp = em_curso;
		em_curso = em_curso->prox;
		free(temp);
	}
	free(monte);
}
