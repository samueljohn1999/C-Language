#include <stdio.h>
#include <stdlib.h>
int global_v;///global variable whenever it is intialized computer assigns its a default value i.e 0
int main()
{
   int local_v;
   printf("LOCAL VARIABLE=%d\n",local_v);///if we don't assign a value to local variable it will print a garbage value
   printf("GLOBAL VARIABLE=%d",global_v);



}
