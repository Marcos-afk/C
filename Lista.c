#include<stdio.h>
#include<stdlib.h>
#include "lista.h"

void Adicionar(int valor){
    TLista *novo = new();
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

void ExcluirP(){
    TLista *destroyer = primeiro;
    primeiro = primeiro ->next;
    free(destroyer);
    printf("\n Valor excluido");
}

void Excluir(int pos){
    if( (pos == 1) && (primeiro == NULL)){
        ExcluirP();
        return;
    }
    TLista * anterior = primeiro;
	TLista * destroyer;
	int contador = 2;
                     
	while (contador < pos){
		anterior = anterior->next;
		contador++;
	}

	destroyer = anterior->next;
	anterior->next = destroyer->next; 
	free(destroyer);
}


int main(int argc, char const *argv[])
{
    primeiro = NULL;
    int men = 0 ,valor,key,pos;
    while(men != 5){
        int opc;
        printf("\n Lista");
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
        printf("\n posicao do valor: ");
        scanf("%d",&pos);
        Excluir(pos);
        break;
        case 5:
            men = opc;
            break;
         default:
         printf("\n Opcao inexistente");
         break;   
        }

    }

    return 0;
}





