#include<stdio.h>
#include<stdlib.h>
void insertion(int a[],int n)
{
    int i,s,value;
    for(i=1;i<=n-1;i++)
    {value= a[i];
    s=i;
    while(s>0 && a[s-1]>value )
    {
        a[s]=a[s-1];
        s=s-1;
    }
    a[s]=value;///IT WILL BE A[S] NOT A[I] CAUSE S VALUE IS NOW 0 UNTIL FOR LOOP IS AGAIN RUN BUT IF WE USE A[I] THERE WONT BE ANY CHANGE.
}
for(i=0;i<n;i++)
 {
    printf("%d",a[i]);
   }
}

int main()
{
    int a[5]={7,9,3,1,2};
    insertion(a,5);
}
