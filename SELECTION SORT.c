#include<stdio.h>
#include<stdlib.h>

void selectionsort(int a[],int n)
{
    int i;
    printf("YOUR SORTED ARRAY IS (SELECTION SORT)= ");
    for(i=0;i<n-1;i++)
    {
        int j,swap;
        for(j=i+1;j<n;j++)
        {
            if (a[j]<a[i])
            {
                swap=j;
            }
        }
        int temp=a[i];
        a[i]=a[swap];
        a[swap]=temp;

        }
        for(i=0;i<n;i++)
        {printf(" %d ",a[i]);}

}
int main ()
{
   int n;
   printf("ENTER SIZE OF ARRAY\n");
   scanf("%d",&n);
   int arr[n],i;
   printf("START WRITING ELEMENTS\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   selectionsort(arr,n);

}
