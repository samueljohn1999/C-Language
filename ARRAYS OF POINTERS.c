#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,size;
    int val_array[50]={};
    printf("ENTER SIZE\n");
    scanf("%d",&size);
    printf("START WRITING ELEMENTS\n");
    for(i=0;i<size;i++)
    {

        scanf("%d",&val_array[i]);
    }
       printf("YOUR ARRAY VALUES ARE - {");
        for(i=0;i<size;i++)
        {
            printf("%d,",val_array[i]);
         }
         printf("}");
    int *pointer_array[50];
    for(i=0;i<size;i++)
    {
        pointer_array[i]=&val_array[i];
    }

    for(i=0;i<size;i++)
    {
        printf("\nADDRESSES OF VAL_ARRAY [%d]= %x\t",i,pointer_array[i]);
        printf("VALUE PRESENT IN VAL_ARRAY [%d]= %d\n",i,*pointer_array[i]);
    }


}
