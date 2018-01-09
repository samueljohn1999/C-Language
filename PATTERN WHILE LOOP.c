#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
  int i,j  ;
  i=0;
  while(i<=10)
  {
    j=1;
    while (j<=i)
    {
        printf("%d",j);
    j++;
    }
    printf("\n");
i++;
}
}
