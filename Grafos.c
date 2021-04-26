#include <stdio.h>
#include <stdlib.h>
 
#define TRUE 1
#define FALSE 0                    


typedef struct SVertice{
	int info;
	_Bool visitado;
	struct SVertice * prox;
	struct SListaAdj * listaAdj;
}TVertice;

typedef struct SListaAdj {
	struct SVertice * vertice;
	struct SListaAdj * prox;
	int peso;
}TListaAdj;


TVertice * inicio = NULL;
TVertice * fim;

TVertice * buscarVertice(int key){
	TVertice * ultimo = inicio;

	while (ultimo != NULL){
		if (ultimo->info == key)
			return ultimo;
		ultimo = ultimo->prox;
	}
	return NULL;
}

TVertice * adicionarVertice(int informacao){
	TVertice * novo;

	novo = buscarVertice(informacao);
	if (novo != NULL)
		return novo;

	novo = malloc(sizeof(TVertice));
	novo->info = informacao;
	novo->visitado = FALSE;
	novo->prox = NULL;
	novo->listaAdj = NULL;

	if (inicio == NULL)
		inicio = novo;
	else
		fim->prox = novo;
	
	fim = novo;
	return novo;
}

void conectar(int infor, int infor2){
	TVertice * vertice, * vertice2;

	vertice = adicionarVertice(infor);
	vertice2 = adicionarVertice(infor2);

	TListaAdj * aresta = malloc(sizeof(TListaAdj));
	aresta->vertice = vertice2;

	TListaAdj * listaAresta = vertice->listaAdj;
	if (listaAresta == NULL)
		vertice->listaAdj = aresta;
	else{
		while (listaAresta->prox != NULL){
			listaAresta = listaAresta->prox;
		}
		listaAresta->prox = aresta;
	}
}

void caminhoSimples(TVertice * vertice){
	if (vertice == NULL)
		return;

	vertice->visitado = TRUE;
	printf("%d ", vertice->info);

	TListaAdj * listaConexoes = vertice->listaAdj;
	while (listaConexoes != NULL){
		if (listaConexoes->vertice->visitado == FALSE)
			caminhoSimples(listaConexoes->vertice);
		listaConexoes = listaConexoes->prox;
	}
}



int main(){

	int leitura, leitura2;

	while (1){
		printf("Informe um vértice ou dois vértices para conectá-los: ");
		scanf("%d %d", &leitura, &leitura2);
		if (leitura == 0)
			break;
		
		if (leitura2 != 0)
			conectar(leitura, leitura2);
		else
			adicionarVertice(leitura);
	}

	caminhoSimples(inicio);
}


