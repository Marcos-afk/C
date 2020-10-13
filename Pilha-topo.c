#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//Aluno: Marcos André Lima de Melo
//Turma : CC3
//matricula : 20191BCC0019

    typedef struct PilhaI{
        int numeros[TAM];
        int topo;
    }PilhaP;
    PilhaP pilha;
    int controle = 0;

    void Adicionar(int tamanho){
        int numero = 0;
        if(pilha.topo + 1 == tamanho){
            printf("\n Pilha cheia \n");
        }else{
        printf("\n Digite um numero: ");
        scanf("%d",&numero);
        pilha.numeros[++pilha.topo] = numero;
    }
    }
    void Exibir(){
        int i;
        for(i = pilha.topo ; i >= 0 ; i--){
            printf("\n [%d] ---> %d \n" , i , pilha.numeros[i]);
        }
    }

    void Buscar(){
        int key = 0;
        int i;
        printf("\n Valor a ser buscado: ");
        scanf("%d",&key);
        for( i = pilha.topo ; i >= 0 ; i-- ){
            if(pilha.numeros[i] == key){
                printf("\n Valor encontrado! , na pos[%d]" , i);
                return;
            }
        }
            printf("\n Valor nao encontrado!");
    }

    void Limpar(){
        if(pilha.topo == -1){
            printf("\n Pilha ja esta vazia! \n");
            return;
        }
        printf("\n Um valor excluido");
        pilha.numeros[pilha.topo--] = 0;
    }



int main(){
    pilha.topo = - 1;
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
         Exibir();
        break;
     case 3:
         Buscar();
        break;
     case 4:
         Limpar();
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
