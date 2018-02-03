#include<stdio.h>
#include<stdlib.h>

int *add(int *a,int *b)
{
    int c = *a+*b;
    return &c;
}

int main()
{
    int a,b;
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&a,&b);
    int *sum= add(&a,&b);
    printf("YOUR SUM IS = %d",*sum);
}
