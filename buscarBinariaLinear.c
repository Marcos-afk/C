#include<stdio.h>
#include<stdlib.h>
#define tam 5

int vetor[tam] = {1, 2, 3, 4, 5};
int passos = 0;

int buscaLinear(int v[], int key, int tamanho){
    int x;
    for(x = 0; x < tamanho; x++){
        passos ++;
        if(v[x] == key){
            return x;

        }

    }
    return -1;
}

int buscaBinariaLinear(int v[],int key, int tamanho){
    int inicio = 0;
	int fim = tamanho - 1;

	while (inicio <= fim){
		passos ++;
		int meio = (inicio + fim)/2;
		if (v[meio] == key){
			return meio;
		}else{
			if (key > v[meio]){
				inicio = meio + 1;
            }
			else{
				fim = meio - 1;
            }
		}
	}
	return -1;
}



int main(){
    int opc = 0;
    int key, pos;
    printf("\n Escolha uma opcaoo de Busca: ");
    printf("\n 1 - Busca Linear");
    printf("\n 2 - Buscar Binaria Linear \n");
    scanf("%d",&opc);

    switch (opc)
    {
    case 1:
        printf("\n Valor a ser buscado : ");
        scanf("%d",&key);
        pos = buscaLinear(vetor, key, tam);
        printf("\n Valor encontrado na posicao: [%d]", pos);
        printf("\n Numero de passos: %d", passos);
        break;
    
    case 2:
        printf("\n Valor a ser buscado : ");
        scanf("%d",&key);
        pos = buscaBinariaLinear(vetor, key, tam);
        printf("\n Valor encontrado na posicao: [%d]", pos);
        printf("\n Numero de passos: %d", passos);
        break;
    default:
        printf("\n Não ha essa opcao na lista ");
        break;
    }
    return 0;
}