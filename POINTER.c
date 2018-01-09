#include<stdio.h>
#include<stdlib.h>
///A pointer is a variable whose value is the address of another variable.
int main()
{
    int val=30;
    int *pointer;
    pointer=&val;///NOW THE VALUE OF POINTER VARIABLE IS THE ADDRESS OF VAL.

    printf("the address is = %x\n",&val);
    printf("THE POINTER = %x\n",pointer);
    /// NOW IF WE WANT TO PRINT THE VALUE PRESENT IN VAL (i.e=30) USING POINTER VARIABLE THEN WE USE SYMBOL(*)
    printf("THE VALUE OF VAL USING PONTER VARIABLE = %d",*pointer);

}
