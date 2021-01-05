#include<stdio.h>
#include<stdlib.h>

typedef struct INo{
    int dado;
    struct INo *dir;
    struct INo *esq;

}TNo;

TNo *raiz;

void CriarRaiz( int informacao){
    raiz = malloc(sizeof(TNo));
    raiz->dado = informacao;
    raiz->esq = raiz->dir = NULL;
}



void Preencher(TNo *pai, int informacao){
    TNo *novo;
    if(pai == NULL){
        return;
    }

    if(informacao < pai->dado){
        if(pai->esq == NULL){
            novo = malloc(sizeof(TNo));
            novo->dado = informacao;
            novo->esq = novo->dir = NULL;
            pai->esq = novo;

        }else{
            Preencher(pai->esq, informacao);
        }

    }else if (informacao > pai->dado){
        if(pai->dir == NULL){
            novo = malloc(sizeof(TNo));
            novo->dado = informacao;
            novo->esq = novo->dir = NULL;
            pai->dir = novo;
        }else{
            Preencher(pai->dir, pai->dado);
        }
        
    }else{
        printf("\n Valor já existe!");
    }   

}

void preFixado(TNo *no){
    if(no == NULL){
        return;
    }
    printf("\n Valor: %d", no->dado);
    preFixado(no->esq);
    preFixado(no->dir);
}

void Central(TNo *no){
    if(no == NULL){
        return;
    }
    Central(no->esq);
    printf("\n Valor: %d", no->dado);
    Central(no->dir);
}

void posFixado(TNo *no){
    if (no == NULL)
    {
        return;
    }

    posFixado(no->esq);
    posFixado(no->dir);
    printf("\n Valor: %d", no->dado);
}

TNo *Buscar(TNo *no , int Key){
    if (no == NULL)
    {
        return;
    }
    if(no->dado == Key){
        return no;
    }else if(Key < no->dado){
       return Buscar(no->esq, Key);

    }else{
        return Buscar(no->dir, Key);
    }
}


int main(int argc, char const *argv[])
{




    int informacao;
    printf("\n Digite o Valor da raiz: ");
    scanf("%d",&informacao);
    CriarRaiz(informacao);

    while (1)
    {
        printf("\n valor do no: ");
        scanf("%d",&informacao);

        if(informacao == 0){
            break;
        }else
        {
            Preencher(raiz, informacao);
        }
    }

    preFixado(raiz);
    printf("\n------------");
    Central(raiz);
    printf("\n------------");
    posFixado(raiz);
    printf("\n------------");

    int key;
    printf("\n Valor a ser buscado: ");
    scanf("%d",&key);

    TNo *pos = Buscar(raiz, key);

    if(pos == NULL){
        printf("\n Valor não encontrado na árvore");
    }else{
        printf("\n Valor encontrado na posicao: %p", pos);

    }

    return 0;
}
