#include<stdio.h>
#include<stdlib.h>

void bubblesort(int a[],int n)
{
    int j,swap,i,flag=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-1-i;j++)
        {
            if (a[j]>a[j+1])
        {
            swap=a[j];
            a[j]=a[j+1];
            a[j+1]=swap;
            flag=1;

          }
        }
        if (flag==0)break;

    }

}

int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY\n");
    scanf("%d",&n);
    int a[n],i;
    printf("START WRITING ELEMENTS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubblesort(a,n);
    for(i=0;i<n;i++)
{
    printf(" \n%d ",a[i]);
  }

}
