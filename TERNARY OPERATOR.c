#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("ENTER THE VALUES FOR A AND B\n");
   scanf("%d %d",&a,&b);
   c = (a>b) ? "A is greater":"B is greater";
   printf("%s\n",c);

}
