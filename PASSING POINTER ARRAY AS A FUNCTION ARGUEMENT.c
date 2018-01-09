#include<stdio.h>
#include<stdlib.h>

int getsum(int size,int *pointer)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum += pointer[i];
    }
    return sum;
}
int arraysum(int size,int array[])
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+array[i];
    }
    return sum;
}
int main()
{
    int i,myarray[5]={1,2,3,4,5};
    int pointersum= getsum(5,myarray);
    int myarraysum= arraysum(5,myarray);
    printf("POINTER SUM = %d \n",pointersum);
    printf("ARRAY SUM = %d\n",myarraysum);



}
