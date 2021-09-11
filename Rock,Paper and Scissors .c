#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
void oyun(char choose)
{
    int random;
    int score,total=0;
    srand(time(NULL));
    random=rand()%3;
    if(random==0 && choose=='R')
    {
        printf("Computer= Rock\n");
        printf("TIE!\n");
        total=score;
        printf("%d score: ",total);
    }
    if(random==1 && choose=='R')
    {
        printf("Computer= Paper\n");
        printf("GAME OVER!\n");
        score--;
        total=total+score;
        printf("%d score",total);
    }
    if(random==2 && choose=='R')
    {
        printf("Computer= Scissors\n");
        printf("WIN!\n");
        score++;
        total=total+score;
        printf("%d score",total);
    }
    if(random==0 && choose=='P')
    {
        printf("Computer= Rock\n");
        printf("WIN!\n");
        score++;
        total=total+score;
        printf("%d score",total);
    }
    if(random==1 && choose=='P')
    {
        printf("Computer= Paper\n");
        printf("TIE!\n");
        total=score;
        printf("%d score",total);
    }
    if(random==2 && choose=='P')
    {
        printf("Computer= Scissors\n");
        printf("GAME OVER!\n");
        score--;
        total=total+score;
        printf("%d score",total);
    }
    if(random==0 && choose=='S')
    {
        printf("Computer= Rock\n");
        printf("GAME OVER!\n");
        score--;
        total=total+score;
        printf("%d score",total);
    }
    if(random==1 && choose=='S')
    {
        printf("Computer= Paper\n");
        printf("WIN!\n");
        score++;
        total=total+score;
        printf("%d score",total);
    }
    if(random==2 && choose=='S')
    {
        printf("Computer= Scissors\n");
        printf("TIE!\n");
        total=score;
        printf("%d score",total);
    }
}
int main()
{
    char play;
    char choose;
    printf("\t\t\tWelcome\n");
    do
    {
        printf("\n\tPress  'Y' to play, 'N' to exit:\n");
        scanf("%c",&play);
        if(play=='Y')
        {
            printf("\tRock='R'\n\tPaper:'P'\n\tScissors:'S'\n");
            scanf("%s",&choose);
            oyun(choose);
        }
    }
    while(play!='N');
    system("cls");
    return 0;
}
