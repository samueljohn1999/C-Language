#include<stdio.h>
#include<stdlib.h>

int arraysum (int size,int elements[])
{   int i,sum=0;
    for (i=0;i<size;i++)
    {
        sum=sum+elements[i];
    }
    return sum;
}
int main()
{
    int size,array[7]={1,2,3,4,5,6,7};


    int sum = arraysum(7,array);
    printf("THE SUM OF ARRAYS ARE = %d",sum);


}
