typedef struct ILista
{
    int dado;
    struct ILista *next;
    
}TLista;

typedef struct IDescritor{
    TLista *primeiro;
    int quantidade;
    TLista *ultimo;

}TDescritor;

TDescritor descritor;
TLista *novo;
TLista *ultimo;

TLista *inicial(){
    novo = malloc(sizeof(TLista));
    novo->next = NULL;
    descritor.primeiro = novo;
    descritor.ultimo = novo;
    descritor.quantidade = 1;
    return novo;    
}

TLista *proximos(){
    novo = malloc(sizeof(TLista));
    novo->next = NULL;
    descritor.ultimo->next = novo;
    descritor.ultimo = novo;
    descritor.quantidade++;
    return novo;
    
}

TLista *new(){
    if(descritor.primeiro == NULL){
        return inicial();
    }else{
        return proximos();
    }

}
