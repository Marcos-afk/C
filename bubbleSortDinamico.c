#include<stdio.h>
#include<stdlib.h>
#include "bubbleSort.h"

void Adicionar(int valor){
    TFila *novo = new();
    novo->dado = valor;
}

void Exibir(){
    ultimo = primeiro;
    while (ultimo != NULL)
    {
        printf("\n Valor : %d", ultimo->dado);
        ultimo = ultimo->next;
    }
}

void bubbleSort(TFila * primeiro){
	int i, temp, j;
	TFila * atual;
	TFila * proximo;
	TFila * ultimo = primeiro;
	for (ultimo = primeiro; ultimo != NULL; ultimo = ultimo->next){       
		for (atual = primeiro; atual->next != NULL; atual = atual->next){ 
			proximo = atual->next;
			if (atual->dado > proximo->dado){
				temp = atual->dado;
				atual->dado = proximo->dado;
				proximo->dado = temp;
			}	
		}
	}
}


int main(int argc, char const *argv[])
{
    primeiro = NULL;
    int men = 0 ,valor,key;
    while(men != 3){
        int opc;
        printf("\n Bubble Sort");
        printf("\n 1- Adicionar");
        printf("\n 2- Exibir");
        printf("\n 3- Sair \n");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1:
        while (1)
        {
            printf("\n Informe o Valor: ");
            scanf("%d",&valor);
            if(valor == 0){
                break;
            }else{
                Adicionar(valor);
            }
        }
            break;
        
        case 2:
            bubbleSort(primeiro);
            Exibir();
        break;
        case 3:
            men = opc;
            break;
        }

    }

    return 0;
}
