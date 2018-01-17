#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[10];
    int num,element,position,i;
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
    printf("\nENTER THE NUMBER TO BE INSERTED\n");
    scanf("%d",&element);
    printf("ENTER THE POSITION WHERE THE NUMBER TO BE INSERTED\n");
    scanf("%d",&position);

    for(i= num-1;i>=position;i--)
    {
        a[i+1]=a[i];
    }
    a[position]=element;
    printf("AFTER INSERTION\n");
    for (i=0;i<=num;i++)
    {
         printf("%d\t",a[i]);
    }




}
