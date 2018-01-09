#include <stdio.h>
#include <stdlib.h>
void sum(int a,int b)
{
   int sum=a+b;
    printf("YOUR SUM IS = %d\n",sum);
}
int main()
{
    int x,y;
    sum(20,50);
    sum(100,500);
    sum(700,77);
    printf("ENTER TWO NUMBERS\n");
    scanf("%d %d",&x,&y);
    sum(x,y);
}
