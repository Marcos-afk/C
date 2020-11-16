#include<stdio.h>
#include<stdlib.h>

void tabuleiro(char casas2[3][3]){
    system("cls");
    printf("\t %c | %c | %c \n" , casas2[0][0] , casas2[0][1] , casas2[0][2]);
    printf("\t ----------\n");
    printf("\t %c | %c | %c \n" , casas2[1][0] , casas2[1][1] , casas2[1][2]);
    printf("\t ----------\n");
    printf("\t %c | %c | %c \n" , casas2[2][0] , casas2[2][1] , casas2[2][2]);
}

int main(){
  char jogo[3][3] = {{'1','2','3'} , {'4','5','6'} , {'7','8','9'}};
   int resp;
   int jogadas,l,c,vez = 0 , i , j;
 do{
        jogadas = 1;
        for(i = 0 ; i <=2 ; i++){
            for(j = 0 ;  j <=2 ; j++){
                    jogo[i][j] = ' ';

            }
        }
        do{
                if(vez%2==0){
                    printf("\n Jogador x");
                }else{
                    printf("\n Jogador O");
                }
            tabuleiro(jogo);
            printf("\n digite a linha: ");
            scanf("%d",&l);
            printf("\n digite a coluna: ");
            scanf("%d",&c);
            if( l < 1 || c < 1 || l > 3 || c > 3){
                    l = 0;
                    c = 0;

            } else if(jogo[l-1][c-1]!=' '){
                    l = 0;
                    c = 0;
            } else{
                if(vez%2==0){
                    jogo[l-1][c-1] = 'X';

                }else{
                 jogo[l-1][c-1] = 'O';

                }
                vez++;
                jogadas++;
                    }
                    if(jogo[0][0]=='X' && jogo[0][1]=='X' && jogo[0][2]=='X'){ jogadas = 11;}
                    if(jogo[1][0]=='X' && jogo[1][1]=='X' && jogo[1][2]=='X'){ jogadas = 11;}
                    if(jogo[2][0]=='X' && jogo[2][1]=='X' && jogo[2][2]=='X'){ jogadas = 11;}
                    if(jogo[0][0]=='X' && jogo[1][0]=='X' && jogo[2][0]=='X'){ jogadas = 11;}
                    if(jogo[0][1]=='X' && jogo[1][1]=='X' && jogo[2][1]=='X'){ jogadas = 11;}
                    if(jogo[0][2]=='X' && jogo[1][2]=='X' && jogo[2][2]=='X'){ jogadas = 11;}
                    if(jogo[0][0]=='X' && jogo[1][1]=='X' && jogo[2][2]=='X'){ jogadas = 11;}
                    if(jogo[0][2]=='X' && jogo[1][1]=='X' && jogo[2][0]=='X'){ jogadas = 11;}
                    if(jogo[0][0]=='O' && jogo[0][1]=='O' && jogo[0][2]=='O'){ jogadas = 12;}
                    if(jogo[1][0]=='O' && jogo[1][1]=='O' && jogo[1][2]=='O'){ jogadas = 12;}
                    if(jogo[2][0]=='O' && jogo[2][1]=='O' && jogo[2][2]=='O'){ jogadas = 12;}
                    if(jogo[0][0]=='O' && jogo[1][0]=='O' && jogo[2][0]=='O'){ jogadas = 12;}
                    if(jogo[0][1]=='O' && jogo[1][1]=='O' && jogo[2][1]=='O'){ jogadas = 12;}
                    if(jogo[0][2]=='O' && jogo[1][2]=='O' && jogo[2][2]=='O'){ jogadas = 12;}
                    if(jogo[0][0]=='O' && jogo[1][1]=='O' && jogo[2][2]=='O'){ jogadas = 12;}
                    if(jogo[0][2]=='O' && jogo[1][1]=='O' && jogo[2][0]=='O'){ jogadas = 12;}


        }while(jogadas <= 9);
        if(jogadas == 10){
            printf("\n velha!(empate)");
        }
        if(jogadas == 11){
            printf("\n Jogador X venceu!(Vapo!)");
        }
        if(jogadas == 12){
            printf("\n Jogador Y venceu(Boludo!)");
        }

    printf("\n Deseja jogar novamente ? [ 1 - sim  //  2 - nao]  :   ");
    scanf("%d",&resp);
 }while(resp == 1);




    return 0;
}
