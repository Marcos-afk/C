typedef struct IPilha
{
    int dado;
    struct IPilha *next;
    
}TPilha;

TPilha *primeiro;
TPilha *novo;
TPilha *ultimo;

TPilha *inicial(){
    novo = malloc(sizeof(TPilha));
    novo->next = NULL;
    primeiro = novo;
    return novo;    
}

TPilha *proximos(){
    novo = malloc(sizeof(TPilha));
    novo->next = primeiro;
    primeiro = novo;
    return novo;
    
}

TPilha *new(){
    if(primeiro == NULL){
        return inicial();
    }else{
        return proximos();
    }

}
