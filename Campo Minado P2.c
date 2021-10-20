/********************************************/
/*  P2 - Laborat�rio de Progra��o UFGD      */
/*  Jogo Campo Minado em Linguagem C        */
/*											*/
/*  Caroline Lopes Dos Santos Marton        */
/*  19/05/2021                              */
/********************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<string.h>
#include <locale.h>
#include <windows.h>

    void gotoxy(int x,int y)//Para mostrar jogadas escolhida, essa fun��o permite posicionar o cursos em qualquer lugar
    {
        //Coordenadas
        COORD c;
        c.X = x;
        c.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
    }

    int main(){
        setlocale(LC_ALL,"");
        srand(time(NULL)); //fun��o para gerar bombas
            char campo[5][5], minado[5][5];
            int linha, coluna, i, j, k, f=0, minas, nivel, jogada;
                printf("\n  ***************************************************");
                printf("\n  ********** BEM VINDO AO CAMPO MINADO 1.0 **********");//Menu inicial
                printf("\n  ***************************************************");
                printf("\n  Como jogar: \n  Voc� dever� escolher a coordenada entre 0 e 4, \n  para nos dizer onde acredita que n�o existe bomba. \n  Caso acerte, se prepare para a pr�xima jogada. \n  Cuidado! Se escolher errado voc� ir� explodir. ");
                printf("\n\n  Escolha um n�vel de dificuldade:\n  (1) F�cil      -> 05 BOMBAS \n  (2) Dif�cil    -> 12 BOMBAS \n  (3) Imposs�vel -> 24 BOMBAS \n\n");
            do{
                scanf("%d",&nivel);
            } while(nivel <1 || nivel > 3);
                for(i=0;i<5;i++) //Tabuleiro que aparece na tela
                    for(j=0;j<5;j++)
                        campo[i][j]=0;
                            if(nivel==1){
                                printf("\n\n N�VEL 1 - 5 BOMBAS no tabuleiro\n Pressione uma tecla para iniciar");
                                minas = 5;
                            }
                                else{
                                    if(nivel==2){
                                        printf("\n\n N�VEL 2 - 12 BOMBAS no tabuleiro\n Pressione uma tecla para iniciar");
                                        minas = 12;
                                    }
                                        else{
                                            printf("\n\n N�VEL 3 - 24 BOMBAS no tabuleiro\n Pressione uma tecla para iniciar");
                                            minas = 24;
                                        }
                                    }


        for(linha=0;linha<minas;linha++)  //Tabuleiro do jogo
            campo[rand()%5][rand()%5] = '*';
        getch();
        system("cls"); //Limpa a tela
        printf("\n\n                   Colunas\n             0   1   2   3   4\n");
        printf("Linha 0 ->     |   |   |   |   \n");
        printf("            ___|___|___|___|___\n");
        printf("Linha 1 ->     |   |   |   |   \n");
        printf("            ___|___|___|___|___\n");
        printf("Linha 2 ->     |   |   |   |   \n");
        printf("            ___|___|___|___|___\n");
        printf("Linha 3 ->     |   |   |   |   \n");
        printf("            ___|___|___|___|___\n");
        printf("Linha 4 ->     |   |   |   |   \n");
        printf("               |   |   |   |   \n");

            for(jogada=1;jogada<10;jogada++){// la�o para controlar o n� de jogadas
                do{
                    gotoxy(5,15);
                    printf("                                            \n");
                    printf("                                              ");
                    gotoxy(5,15);
                    printf("Informe a linha: ");
                    scanf("%d",&linha);
                    printf("     Informe a coluna: ");
                    scanf("%d",&coluna);

                } while((linha<0||linha>4) || (coluna<0||coluna>4));

                    if(campo[linha][coluna]=='*'){  // Caso o jogador marque o espa�o que est� a mina o jogo acaba
                        printf("\n\n   Voc� pisou na mina!");
                        printf("\n\n       GAME OVER");
                        f=1;
                        break;
                    }
                         else{
                         campo[linha][coluna]='X';             // Se marcar um espa�o sem mina vai aparecer o X no tabuleiro
                        }
                            for(i=0;i<5;i++){                      // Quantidade de linhas
                                k=13;                             // Primeira posi��o
                                    for(j=0;j<5;j++){                // Quantidade de colunas
                                        if(campo[i][j] !='*') // Verifica se tem mina
                                        {
                                            gotoxy(k,i*2+4);      // Fun��o que coloca o cursor nessa posi��o
                                            printf("%c",campo[i][j]); //Imprime o que est� nessa posi��o
                                        }
                                        k+=4;                     //Vai para a proxima posi��o no desenho na tela
                                    }
                            }
            }
                gotoxy(0,22);
                    if(f==0)printf("     Parab�ns,  Voc� Venceu!\n");
                        getch();
        return 0;
    }
