#include<stdio.h>
#include<stdlib.h>

struct student
{
    int id;
    char name[20];
    float percentage;
}record;

int main()
{
    printf("ENTER STUDENT ID\n");
    scanf("%d",&record.id);
    printf("ENTER STUDENT NAME\n");
    scanf("%s",&record.name);
    printf("ENTER STUDENT PERCENTAGE\n");
    scanf("%f",&record.percentage);
    printf("STUDENT id.= %d\n",record.id);
    printf("STUDENT NAME = %s\n",record.name);
    printf("STUDENT PERCENTAGE = %f\n",record.percentage);



}
