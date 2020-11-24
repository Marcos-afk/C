typedef struct ILista
{
    int dado;
    struct ILista *next;
    
}TLista;

TLista *primeiro;
TLista *novo;
TLista *ultimo;

TLista *inicial(){
    novo = malloc(sizeof(TLista));
    novo->next = NULL;
    primeiro = novo;
    return novo;    
}

TLista *proximos(){
    novo = malloc(sizeof(TLista));
    novo->next = NULL;
    ultimo = primeiro;
    while (ultimo->next != NULL)
    {
        ultimo =  ultimo->next;
    }
        ultimo -> next = novo;
    
    return novo;
    
}

TLista *new(){
    if(primeiro == NULL){
        return inicial();
    }else{
        return proximos();
    }

}
