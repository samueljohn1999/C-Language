#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data ;
  struct node *next;

};
struct node *head; //this is head node pointer i.e. a pointer which will point towards the first node
//we are using struct node *head cause every pointer needs to point some where(ex. int *p) in this case the pointer needs to point to structure node
void insert(int x)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp-> data = x;
  temp -> next = NULL;
  if (head != NULL) temp -> next = head; // this will save the pointer address present in the head to the link of the new node(the new head node)
  head = temp; //this will make the head pointer to save the address of new node and the previous head node address will be linked to the new head node

}
void print()
{
  struct node *temp;
  temp = head;
printf("YOUR NUMBER ARE = ");
  while (temp != NULL)
  { printf("%d ",temp->data);
     temp = temp->next;
   }
   printf("\n");

}
int main()
{
  head = NULL;
  printf("ENTER HOW MANY NUMBERS YOU WANT TO SAVE \n");
  int n,i,x;
  scanf("%d",&n);
  printf("START WRITING NUMBERS \n");
  for (i=0;i<n;i++)
  {
    scanf("%d",&x);
    insert(x);
    print();

  }

}
