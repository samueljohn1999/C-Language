#include<stdio.h>
#include<stdlib.h>
int factorial(int n)
{
    if (n==0)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }

}
int main()
{
    int n;
    printf("ENTER A NUMBER\n");
    scanf("%d",&n);
    int result=factorial(n);
    printf("YOUR FACTORIAL IS = %d \n",result);
}
