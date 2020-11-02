#include<stdio.h>
#include<stdlib.h>
#define TAM 5

//Aluno: Marcos Andre Lima de Melo
//Turma : CC3
//matricula : 20191BCC0019

    typedef struct PilhaI{
        int numeros[TAM];
        int topo;
    }PilhaP;

    void Adicionar(int tamanho , PilhaP *p){
        int numero;
        if(p->topo + 1 == tamanho){
            printf("\n Pilha cheia \n");

        }else{
        printf("\n Digite um numero: ");
        scanf("%d",&numero);
        p->numeros[++p->topo] = numero;
        }
    }
    void Exibir(PilhaP *p){
        int i;
        for(i = p->topo ; i >= 0 ; i--){
            printf("\n [%d] ---> %d \n" , i , p->numeros[i]);
        }
    }

    void Buscar(PilhaP *p){
        int key = 0;
        int i;
        printf("\n Valor a ser buscado: ");
        scanf("%d",&key);
        for( i = p->topo ; i >= 0 ; i-- ){
            if(p->numeros[i] == key){
                printf("\n Valor encontrado! , na pos[%d]" , i);
                return;
            }
        }
            printf("\n Valor nao encontrado!");
    }

    void Limpar(PilhaP *p){
        if(p->topo == -1){
            printf("\n Pilha ja esta vazia! \n");
            return;
        }
        printf("\n Um valor excluido");
        p->numeros[p->topo--] = 0;
    }



int main(){
    PilhaP *pilha;
    pilha->topo = -1;
    int i;
    while(i != 6){
        printf("\n --------------------------- \n");
        printf("\n 1 - Adicionar \n");
        printf("\n 2 - Exibir \n");
        printf("\n 3 - Buscar \n");
        printf("\n 4 - Excluir \n");
        printf("\n 5 - Limpar Tela \n");
        printf("\n 6 - Sair \n");
        printf("\n ----------------------- \n");
        scanf("%d",&i);
        switch(i){
     case 1:
         Adicionar(TAM , pilha);
        break;
     case 2:
         Exibir(pilha);
        break;
     case 3:
         Buscar(pilha);
        break;
     case 4:
         Limpar(pilha);
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

