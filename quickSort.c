#include <stdio.h>
#define TAM 5 

int vetor[TAM] = {1, 2, 3, 4, 5}; 		         
  
int partition(int v[], int inicio, int fim){
	int atual,temp;
	int pivo = v[fim];  
	int menores = inicio - 1;
	for (atual = inicio; atual < fim; atual++){
		if (v[atual] < pivo){
			menores++;
			temp = v[atual];
			v[atual] = v[menores];
			v[menores] = temp;
		}	
	}
	int meio = menores + 1;
	temp = vetor[meio];
	vetor[meio] = vetor[fim];
	vetor[fim] = temp;
	return meio;
}
								
void quickSort(int v[], int inicio, int fim){ 	
	if (inicio < fim){
		int meio = partition(v,inicio,fim);
		quickSort(v,inicio,meio - 1);  
		quickSort(v,meio + 1, fim);    
	}
}

void listar(int v[], int tamanho){
	int i;
	printf("\n\nListando o vetor\n\n");
	for (i = 0; i < tamanho; i++){
		printf("%d\n", v[i]);
	}
}

int main(){
	listar(vetor, TAM);
	quickSort(vetor,0,TAM - 1);
	listar(vetor, TAM);
}


