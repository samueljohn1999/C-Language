#include<stdio.h>
#include<stdlib.h>

 int main()
 {
     int x=5;
     int *p=&x;
     printf("POINTER VALUE (*p)= %d \n",*p);
     *p=6;
     printf("POINTER VALUE (*p)= %d \n",*p);
     int **q=&p;
     printf("VALUE OF POINTER q(*q) = %d \n",*q);
     printf("VALUE OF POINTER q(**q) = %d \n",**q);
     int ***r=&q;
     printf("VALUE OF POINTER r(*r) = %d \n",*r);
     printf("VALUE OF POINTER r(**r) = %d \n",**r);
     printf("YOUR POINTER VALUE OF r(***r)= %d\n",***r);

 }
