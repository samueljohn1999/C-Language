#include<stdio.h>
#include<stdlib.h>

union myunion
{
    int myint;
    char mychar;
};

int main()
{
    union myunion uni;

    uni.myint=7;
    uni.mychar=9;
    printf("UNION VALUE PRESENT= %i",uni.mychar);
        printf("UNION VALUE PRESENT= %i",uni.myint);

}
