
typedef struct SPilha{
    int dado;
    struct SPilha *next;
    struct SPilha *prev;
} TPilha;



TPilha *primeiro;
TPilha *novo;
TPilha *ultimo;

TPilha *inicial(){
    novo = malloc(sizeof(TPilha));
    novo->next = NULL;
    novo->prev = NULL;
    primeiro = novo;
    return novo;
}

TPilha *proximos(){
    novo = malloc(sizeof(TPilha));
    novo->next = primeiro;  
    primeiro->prev = novo;  
    primeiro = novo;
    return novo;
}


TPilha *new (){
    if (primeiro == NULL)
       return inicial();
    else
        return proximos();
}