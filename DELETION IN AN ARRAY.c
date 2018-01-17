#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10];
    int num,position,i;
    printf("ENTER NUMBER\n");
    scanf("%d",&num);
    printf("ENTER ELEMENTS\n");
    for (i=0;i<num;i++)
    {
        scanf ("%d",&a[i]);

    }
    for (i=0;i<num;i++)
    {
        printf ("%d\t",a[i]);

    }

    printf("ENTER THE POSITION WHERE THE NUMBER TO BE DELEATED\n");
    scanf("%d",&position);

    for(i=position;i<=num;i++)
    {
       a[i]=a[i+1];
    }
    num--;
    printf("AFTER DELETION\n");
    for (i=0;i<num;i++)
    {
         printf("%d\t",a[i]);
    }




}

