#include<stdio.h>
#define tam 5

int vet[tam] = {5 , 4 , 3 , 2 ,1};
int cont, aux , i;

void bubble_sort( int vet[] , int  tamanho){
    for( cont = 0; cont < tamanho; cont++){
    for (i = 0; i < tamanho - 1; i++){
        if(vet[i] > vet[i + 1]){
            aux = vet[i];
            vet[i] = vet[i + 1];
            vet[i + 1] = aux;

        }
    }
    }

}

void listar( int vet[] , int tamanho){
    int i;
    for(i = 0; i < tam; i++){
        printf("\n Valor : %d", vet[i]);
    }

}



int main(int argc, char const *argv[])
{
    bubble_sort(vet, tam);
    listar(vet, tam);
    
    return 0;
}

