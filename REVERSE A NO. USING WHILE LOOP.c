#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x,y,z=0;
    printf("ENTER A NO.");
    scanf("%d",&x);
    while(x!=0)
    {
        y=x%10;
        z=z*10+y;
        x=x/10;
    }
    printf("REVERSE NO. IS %d",z);
}
