#include<stdio.h>
int main(){
    struct aluno{
        char nome[30];
        int id;
        float nota,nota2;

    } aluno[3];

    int busca,x;
    printf("\n ------------------------CADASTRO DE ALUNOS--------------------------");
    for(x = 0; x < 3 ; x++){
            printf("\n %d Nome...: ",x+1);
            scanf("%s",&aluno[x].nome);
            printf("\n %d identificacao....: ",x+1);
            scanf("%d",&aluno[x].id);
            printf("\n %d notas separadas por enter...: ",x+1);
            scanf("%f %f",&aluno[x].nota,&aluno[x].nota2);
            printf("\n ");
    }
 printf("\n ------------------------------------------------------------------------");
  printf("\n id do aluno desejado ? :  ");
  scanf("%d",&busca);
  printf("\n ---------------------------Ficha do Aluno------------------------------");
  for( x = 0 ; x < 3; x++){
        if(busca == aluno[x].id){
            printf("\n Nome do aluno..: %s",aluno[x].nome);
            printf("\n Id do Aluno....: %d",aluno[x].id);
            printf("\n media do aluno...: %.2f",(aluno[x].nota + aluno[x].nota2)/2);
        }


  }
return 0;
}
