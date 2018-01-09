#include <stdio.h>
#include<stdlib.h>

int main()
{         int age;
        printf("ENER YOUR AGE\n");
        scanf("%d",&age);

    if(age>18)
           {printf("YOUR AGE IS MORE THAN 18\n");\
             if(age<21)
             { printf("THE AGE IS GREATER THAN 18 BUT LESS THAN 21\n");}
             else {printf("YOUR AGE IS GREATER THAN 21\n");}
             }

    else if(age == 18)
           {printf("YOUR AGE IS 18\n");}

    else {printf("YOUR AGE IS LESS THAN 18\n");}


}
