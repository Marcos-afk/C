typedef struct IFila
{
    int dado;
    struct IFila *next;
    
}TFila;

TFila *primeiro;
TFila *novo;
TFila *ultimo;

TFila *inicial(){
    novo = malloc(sizeof(TFila));
    novo->next = NULL;
    primeiro = novo;
    return novo;    
}

TFila *proximos(){
    novo = malloc(sizeof(TFila));
    novo->next = NULL;
    ultimo = primeiro;

    while (ultimo->next != NULL)
    {
        ultimo = ultimo->next;
    }
    ultimo->next = novo;
    return novo;
    
}

TFila *new(){
    if(primeiro == NULL){
        return inicial();
    }else{
        return proximos();
    }

}
