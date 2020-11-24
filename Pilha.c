#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

void Adicionar(int valor){
    TPilha *novo = new();
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

void Buscar(int key){
    ultimo = primeiro;
    while (ultimo != NULL)
    {
        if(ultimo->dado == key){
            printf("\n Valor encontrado na posic0o : %p",ultimo);
        }
        ultimo = ultimo->next;       
    }

}

void Excluir(){
    TPilha *destroyer = primeiro;
    primeiro = primeiro ->next;
    free(destroyer);
    printf("\n Valor excluido");
}

int main(int argc, char const *argv[])
{
    primeiro = NULL;
    int men = 0 ,valor,key;
    while(men != 5){
        int opc;
        printf("\n Pilha - L.I.F.O")
        printf("\n 1- Adicionar");
        printf("\n 2- Exibir");
        printf("\n 3- Buscar");
        printf("\n 4- Excluir");
        printf("\n 5- Sair \n");
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
            Exibir();
        break;
        case 3:
            printf("\n Valor a ser buscado : ");
            scanf("%d",&key);
            Buscar(key);
        break;
        case 4:
        Excluir();
        break;
        case 5:
            men = opc;
            break;
        }

    }

    return 0;
}
