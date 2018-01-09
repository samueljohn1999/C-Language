#include<stdio.h>
#include<stdlib.h>
int main()
{
    int row,coloumn,i,j,array[50][50];
    printf("ENTER NO. OF ROWS AND COLOUMNS");
    scanf("%d %d",&row,&coloumn);
    printf("ENTER ELEMENTS");

    for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {
            scanf("%d",&array[i][j]);
        }

    }
   for(i=0;i<row;i++)
    {
        for(j=0;j<coloumn;j++)
        {printf("%d\t",array[i][j]);}
    printf("\n");
    }
}
