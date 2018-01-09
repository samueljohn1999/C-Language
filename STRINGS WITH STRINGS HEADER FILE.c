#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char string1 [50]="SAMUEL";
    char string2 [50]="JOHN";
    char string3 [50];

    strcpy (string3,string1);
    strcat (string1,string2);
    int string_len= strlen (string1);
    printf("STRING 1 = %s\n",string1);
    printf("STRING 2 = %s\n",string2);
    printf("STRING 3 = %s\n",string3);
    printf("STRING LENGTH = %d\n",string_len);


}
