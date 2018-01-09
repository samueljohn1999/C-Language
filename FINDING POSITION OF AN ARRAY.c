#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,array[5]={1,2,4,3,5};
    printf("ENTER THE ELEMENT ");
    scanf("%d",&j);
    for(i=0;i<5;i++)
    {
        if(j==array[i])
        {
            printf("YOR ELEMENT POSITION IS %d\n",i);
        }
        else if (j>5|j==0)
        {
            printf("WRONG INPUT\n");
            break;
        }
    }


}
