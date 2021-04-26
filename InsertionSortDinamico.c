#include<stdio.h>
#include "InsertionSortDinamico.h"
#include<stdlib.h>

void enqueue(int informacao){
	TFila * novo = new();
	novo->dado = informacao;
}

void listar(){
	printf("\n\nListando valores\n");
	ultimo = primeiro;
	while (ultimo != NULL){
		printf("%d ",ultimo->dado);
		ultimo = ultimo->next;
	}
}
                        
void insertionSort(TFila * primeiro){
	TFila * atual;
	TFila * anterior;
	int pivo;
	for (atual = primeiro->next; atual != NULL; atual = atual->next){
		pivo = atual->dado;
		anterior = atual->prev;
		while(anterior != NULL && anterior->dado > pivo){
			anterior->next->dado = anterior->dado;
			anterior = anterior->prev;
		}
		if (anterior == NULL)
		 	primeiro->dado = pivo;
		 else
		 	anterior->next->dado = pivo;
	}
}




int main(int argc, char **argv){
	enqueue(5);
	enqueue(4);
	enqueue(3);
	enqueue(2);
	enqueue(1);
	listar();
	insertionSort(primeiro);
	listar();

	return 0;
}

