#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//Aluno: Marcos André Lima de Melo
//Turma : CC3
//matricula : 20191BCC0019

    typedef struct FilaI{
        int numeros[TAM];
        int inicio;
        int fim;
    }FilaP;
    FilaP fila;
    int controle = 0;

    void Adicionar(int tamanho){
       int numero = 0;
       if((fila.fim != -1) && ((fila.fim + 1) % tamanho  == fila.inicio)){
            printf("\n fila cheia \n");
            return;
       }
       fila.fim = (fila.fim + 1) % tamanho;
       printf("\n Digite um numero: ");
       scanf("%d",&numero);
       fila.numeros[fila.fim] = numero;
    }

    void Exibir(int tamanho){
        int i = fila.inicio;
        do{
            printf("\n [%d] ---> %d\n", i, fila.numeros[i]);
            i = (i + 1) % tamanho;
        }while(i != (fila.fim + 1) % tamanho);
    }

    int Buscar( int key , int tamanho){
        int i = fila.inicio;
        do{
            if(fila.numeros[i] == key){
                return i;
            }
             i = (i + 1) % tamanho;

        }while(i != (fila.fim + 1) % tamanho);
        return -1;
    }

    void Limpar( int tamanho){
        if(fila.fim == -1){
            printf("\n Fila ja esta vazia");
            return;
        }
        fila.inicio = (fila.inicio + 1) % tamanho;
        printf("\n Removendo um elemento");
    }



int main(){
    fila.inicio = 0;
	fila.fim = -1;
	int key = 0 ;
	int posicao = 0;
    while(controle != 6){
        printf("\n --------------------------- \n");
        printf("\n 1 - Adicionar \n");
        printf("\n 2 - Exibir \n");
        printf("\n 3 - Buscar \n");
        printf("\n 4 - Excluir \n");
        printf("\n 5 - Limpar Tela \n");
        printf("\n 6 - Sair \n");
        printf("\n ----------------------- \n");
        scanf("%d",&controle);
        switch(controle){
     case 1:
         Adicionar(TAM);
        break;
     case 2:
         Exibir(TAM);
        break;
     case 3:
         printf("\n Digite o valor a ser buscado: ");
         scanf("%d",&key);
        posicao = Buscar( key , TAM);
	if (posicao == -1){
		printf("\n Valor nao encontrada na Fila\n");
	}
	else{
		printf("\n Valor encontrado na posicao: %d\n",posicao);
	}
        break;
     case 4:
         Limpar(TAM);
        break;
     case 5:
        printf("\n \n");
        system("cls");
        printf("\n \n");
        break;

        }


}

    return 0;
}
