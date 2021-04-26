#include<stdio.h>
#include<stdlib.h>
#define tam 10

int vetor[tam] = {5, 23, 27, 30, 39, 45, 56, 71, 80, 92};


int buscar_recursiva (int vetor[] , int inicio, int fim, int valor){

    int i = (inicio + fim) / 2;

    if(inicio > fim ){
        return -1;
    }

    if(vetor[i] == valor){
        return i;
    }

    if(vetor[i] < valor){
        return buscar_recursiva(vetor, i + 1, fim, valor);

    }else{
        return buscar_recursiva(vetor, inicio, i - 1 , valor);
    }

}

 int main (){

    int pos =  buscar_recursiva(vetor, 0, tam - 1 , 45);
    printf("Valor encontrado na posicao : %d", pos);
     return 0;
 }