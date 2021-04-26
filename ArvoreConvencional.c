
#include <stdio.h>
#include <stdlib.h>
//Estrutura de dados Árvore Convencioal
typedef struct SNo{
	char dado;
	struct SNo * filho;
	struct SNo * irmao;
} TNo;

TNo * raiz;

 void criarRaiz(int informacao){
	 raiz = malloc(sizeof(TNo)); 
	 raiz->dado = informacao;
	 raiz->filho = raiz->irmao = NULL;
 }

void preencher(TNo * noPai){
	TNo * novo; 
	TNo * irmao;  
	char leitura ;                   
	if (noPai == NULL)                    
		return;
	while (1){
		printf("Raiz: %c \nInforme o valor do nó: ",noPai->dado);
		scanf("\n%c",&leitura);
		if (leitura == '.') 
			break;
		novo = malloc(sizeof(TNo));
		novo->dado = leitura;
		novo->filho = novo->irmao = NULL;
		if (noPai->filho == NULL){
			noPai->filho = novo;
			irmao = novo;
		}else{
			irmao->irmao = novo;
			irmao = novo;
		}
	}
	preencher(noPai->filho);
	preencher(noPai->irmao);	
}
// A B G M N H I C D E J O K P F G L
void profundidade(TNo *no){
	if (no == NULL)
		return;
	printf("%c ", no->dado);
	profundidade(no->filho);
	profundidade(no->irmao);
}
//A B C D E F G L J K P O G H I M N 
void largura(TNo *no){
	if (no == NULL)
		return;
	printf("%c ", no->dado);
	largura(no->irmao);
	largura(no->filho);
}



int main(int argc, char **argv)
{
	char leitura;

	printf("Informe o valor da raiz: ");
	scanf("%c",&leitura);
	criarRaiz(leitura);

	
	preencher(raiz);

	profundidade(raiz);
	printf("\n");
	largura(raiz);

	return 0;
}

