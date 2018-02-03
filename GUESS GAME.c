#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int cash=100;

void play(int bet)
{
    char c[3]={'j','k','q'};
    printf("SHUFFELING............\n");
    srand(time(NULL));///SEEDING OF RANDOM NUMBER GENERATOR
    int i;
    for(i=0;i<3;i++)/// IT NEEDS A LOOP/REFRESH SO THAT ITS VALUE/OUTCOME CAN BE CHANGED.
    {
        int x= rand()%3;
        int y=rand()%3;
        int temp=c[x];
        c[x]=c[y];
        c[y]=temp;
    }
    int guess;
    printf("GUESS THE QUEENS PLACE ENTER (0,1 or 2)\n");
    scanf("%d",&guess);
    if (c[guess]=='q')
    {
        cash = cash+2*bet;
        printf("YOU HAVE WON!!! YOUR RESULTS ARE 0=%c 1=%c 2=%c !!! AND YOUR CASH IS = %d\n",c[0],c[1],c[2],cash);
    }
    else
    {
        cash = cash - bet;
        printf("YOU HAVE LOST!!! YOUR RESULTS ARE 0=%c 1=%c 2=%c AND YOUR CASH LEFT IS =%d\n",c[0],c[1],c[2],cash);
    }

}

int main()
{
    int bet;
    printf("WELCOME TO GUESSING GAME\n");
    printf("YOUR CASH = %d\n",cash);


    while(cash>0)
    {

        printf("ENTER YOUR BET\n");
    scanf("%d",&bet);
     if (bet==0 || bet > cash)break;
     play(bet);
    }

    if (bet>cash)
    {
        printf("WRONG INPUT YOUR BET IS ABOVE YOUR CASH LIMIT\n");
        return main();
    }
    else if (bet==0)
    {
        printf("YOUR ENTERED BET IS 0 WHICH IS NOT VALID\n");
        return main();
    }
    printf("GAME OVER\n");

}
