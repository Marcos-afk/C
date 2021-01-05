#include <stdio.h>
#include <stdlib.h>
#include "FilaCircular.h"

//F.I.F.O => First In First Out

void enqueue(struct SAluno informacao){
	TFila * novo = new();
	novo->dado = informacao;
}

void listar(){
	printf("\n\nListando valores\n");
	ultimo = primeiro;
	do{
		printf("Matricula %d, Nome: %s \n",ultimo->dado.matricula, ultimo->dado.nome);
		ultimo = ultimo->next;
	} while (ultimo != primeiro);
}

 void buscar(int chave){
	ultimo = primeiro;
	do{
		if (ultimo->dado.matricula == chave)
			printf("Valor encontrado na posicao: %p", ultimo);
		ultimo = ultimo->next;
	} while (ultimo != primeiro);

		return NULL;
}

void dequeue(){        
	TFila * destroyer = primeiro;
	ultimo = primeiro;
	while (ultimo->next != primeiro)
		ultimo = ultimo->next;
	primeiro = primeiro->next;
	ultimo->next = primeiro;
	free(destroyer);
}



int main(int argc, char **argv)
{
    primeiro = NULL;
    int men = 0 ,valor,key;
    struct SAluno aluno;
    while(men != 5){
        int opc;
        printf("\n Fila - L.I.F.O");
        printf("\n 1- Adicionar");
        printf("\n 2- Exibir");
        printf("\n 3- Buscar");
        printf("\n 4- Excluir");
        printf("\n 5- Sair \n");
        scanf("%d",&opc);
        switch (opc)
        {
        case 1:
            while(1){
		    printf("Informe o matrícula: ");
		    scanf("%d",&aluno.matricula);
		    if (aluno.matricula == 0)
			        break;

		    printf("Informe o nome: ");
		    scanf("%s",&aluno.nome);

		    enqueue(aluno);
	}
        break;

         case 2:
            listar();
            break;
             case 3:
            printf("\n Valor a ser buscado : ");
            scanf("%d",&key);
            buscar(key);
         break;
        case 4:
        dequeue();
        break;
        case 5:
            men = opc;
            break;
        }
}
	return 0;
}

