#include<stdio.h>
#include<stdlib.h>
#define tam 5


int vetor[tam] = {5,4,3,2,1};
int i , j, aux;


void InsertionSort(int v[] , int tamanho){
    for(i = 1; i < tamanho  ; i++){
           aux = v[i];

        for(j = i; (j > 0) && (aux < v[j - 1]); j--){
            v[j] = v[j - 1];

        }
         v[j] = aux;
       
        

    }

}

void listar(int v[], int tamanho){
    int x;
    for(x = 0 ; x < tamanho; x++){
        printf("\n Valor: %d", v[x]);

    }

}


int main(int argc, char const *argv[])
{
    InsertionSort(vetor, tam);
    listar(vetor, tam);
    
    return 0;
}
