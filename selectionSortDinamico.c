#include<stdio.h>
#include<stdlib.h>
#include "selectionSort.h"
int trocas = 0;

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
                        
void selectionSort(TFila * primeiro){
	int i, temp, j;
	TFila * atual;
	TFila * proximo;
	for (atual = primeiro; atual->next != NULL; atual = atual->next){       
		for (proximo = atual->next; proximo != NULL; proximo = proximo->next){ 
			if (atual->dado > proximo->dado){
				trocas++;
				temp = atual->dado;
				atual->dado = proximo->dado;
				proximo->dado = temp;
			}	
		}
	}
}

void selectionSortEstavel(TFila * primeiro){
	int i, temp, j;
	TFila * atual;
	TFila * menor;
	TFila * proximo;
	for (atual = primeiro; atual->next != NULL; atual = atual->next){  
		menor = atual;     
		for (proximo = atual->next; proximo != NULL; proximo = proximo->next){ 
			if (menor->dado > proximo->dado){
				menor = proximo;
			}	
		}
		trocas++;
		temp = atual->dado;
		atual->dado = menor->dado;
		menor->dado = temp;
	}
}


int main(int argc, char **argv){
	
	enqueue(5);
	enqueue(4);
	enqueue(3);
	enqueue(2);
	enqueue(1);
	listar();
	selectionSortEstavel(primeiro);
	listar();
	printf("\nTrocas: %d\n",trocas);

	return 0;
}


