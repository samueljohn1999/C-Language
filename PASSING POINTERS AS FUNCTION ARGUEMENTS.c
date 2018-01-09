#include<stdio.h>
#include<stdlib.h>

void value(int *my_pointer)
{
    *my_pointer=1000;
}
int main()
{
    int get_value;
    value(&get_value);
    printf("THE VALUE OF GET_VALUE IS = %d \n",get_value);
}
