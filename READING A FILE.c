#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int *file= fopen("c:\\Users\\samue\\OneDrive\\Desktop\\C\\C-Language\\ARRAYS.c","r");
	char c;
	 while (c != EOF)
	 {
	 	c=fgetc(file);
	       printf("%c",c);
	 }
	 fclose(file);
	 return 0;

}
