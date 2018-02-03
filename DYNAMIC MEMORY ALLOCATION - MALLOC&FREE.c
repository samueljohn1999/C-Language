#include<stdio.h>
#include<stdlib.h>

int main()
{
   int *p,i;
   p=(int *)malloc(sizeof(int));
   *p=10;
   printf("%d\n",*p);
   free(p);
   p=(int *)malloc(5*sizeof(int));
   printf("ENTER VALUS FOR ARRAY\n");
   for(i=0;i<5;i++)
   {
       scanf("%d",&p[i]);
   }
    for(i=0;i<5;i++)
   {
       printf("%d\t",p[i]);
   }
   free(p);

}
