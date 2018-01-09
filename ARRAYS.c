#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i;
    int myarray [7]={1,2,3,4,5,6,7};
    char chararray [3]={'a','b','c'};
    int acessarray= myarray [1];
    int array= chararray [1];
    printf("CHARACTER ARRAY= %c\n",array);
    printf("ACESS ARRAY = %d\n",acessarray);
    for (i=0;i<7;i++)
    {
        printf("INDEX NO.[%d]= INDEX NO. VALUE=%d\n",i,myarray[i]);
    }

}
