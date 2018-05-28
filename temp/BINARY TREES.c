#include <stdio.h>
#include<stdlib.h>

struct node
{
  int data ;
  struct node *right;
  struct node *left;
};

struct node *head=NULL;

void insert(int x)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp -> data = x;
  temp -> right = NULL;
  temp -> left = NULL;
  if (head == NULL)
  {
    head = temp;
    return;
}
struct node *parent;
struct node *curr;
curr = head;

while(curr)
{
  parent = curr;
  if (temp -> data > curr -> data)
  {
    curr = curr -> right;
  }
  else
  {
    curr = curr -> left;
  }

}

if (temp -> data > parent -> data)
{
  parent -> right = temp;
}
else
{
  parent -> left = temp;
}


}

void search(int p)
{
   struct node *ser;
   ser = head;
   while(ser!= NULL )
   {

     if(p > ser -> data)
     {

       if ( p == ser -> data)
       {
         printf("MATCH FOUND \n");
         return;
       }
       ser = ser -> right;

     }
     if (p == head -> data)
     {
       printf("MATCH FOUND - ITS HEAD \n");
       return;
     }
    else
     {   if (p == ser -> data)
       {
         printf("MATCH FOUND \n");
         return;
       }
         ser = ser -> left;

     }


      }
      printf("MATCH NOT FOUND \n");
}

void min()
{

  struct node *current;
  current = head;
    int low;


  while(current != NULL)
  {

      low = current -> data;

    current = current -> left;

}

printf("MIN VALUE = %d  \n",low);

}

void max()
{
   struct node *max;
   max = head;
   int top;

   while(max != NULL)
   {

       top = max -> data;

     max = max -> right;
   }
   printf(" MAX VALUE = %d \n",top);

}

void delete (int p)


  {

     struct node *curr,*prev,*temp,*prev1;
     curr = head;
     temp = head;

     if ( p == head -> data)
     {
       if (curr -> right == NULL && curr -> left == NULL)
       {
         free (head);
         head = NULL;
         printf("NOW TREE IS EMPTY  \n");
         return;

       }
       if (curr -> right == NULL)
       {
         temp = curr -> left;
         free(curr);
         head = temp;
         printf("NEW HEAD = %d \n",head -> data);
         return;

       }

       curr = curr -> right;
       if (curr -> left == NULL)
       {
         free (head);
         head = curr;
         printf("NEW HEAD = %d \n",head -> data);
         return;
       }
       while (curr -> left != NULL) //NOTICE ITS curr -> left not curr
       {
         prev = curr;
         curr = curr -> left;
       }
       head -> data = curr -> data;

       if (curr -> right == NULL)
       {
         prev -> left = NULL;
         free(curr);
       }

       if (curr -> right != NULL )
       {
         prev -> left = curr -> right;
         free (curr);
       }
       printf("NEW HEAD =%d \n",head -> data);
       return;

}

while (curr -> data != p)
{
  if (p > curr -> data)
  {
    prev = curr;
    curr = curr -> right;
  }
  if (p < curr -> data)
  {
    prev = curr;
    curr = curr -> left;
  }

}
temp = curr;
if (curr -> right == NULL)
{
  prev -> right = curr -> left;
  free (curr);
  // if you want to check put execute this code prev = prev -> right;
  //printf("NEW tEMP = %d \n",prev -> data );

  return;
}

curr = curr -> right; //GOT TO INSERT ANOTHOR CONDITION I.E. CURR->LEFT IF CURR -> RIGHT IS NULL
while (curr -> left != NULL)
{
  prev1 = curr;
  curr = curr -> left;
}
temp -> data = curr -> data;
if (curr -> right != NULL) // clearing the duplicate
{
  prev1 -> left = curr -> right;
  free (curr);
  }
if (curr -> right == NULL)
{
  prev1 -> left = NULL;
  free (curr);
}
printf("temp  %d ",temp -> data);


}

void preorder (struct node *curr)
{
  //<ROOT/DISPLAY> <LEFT> <RIGHT>
  if (curr == 0)
{  return;}
printf(" %d ",curr -> data);
preorder(curr -> left);
preorder(curr -> right);
}

void inorder (struct node *curr)
{
  // <LEFT>  <ROOT/DISPLAY> <RIGHT>
  if (curr == 0)
{  return;}

inorder(curr -> left);
printf(" %d ",curr -> data);
inorder(curr -> right);
}

void postorder (struct node *curr)
{
  // <LEFT> <RIGHT> <ROOT/DISPLAY>
  if (curr == 0)
{  return;}

postorder(curr -> left);
postorder(curr -> right);
printf(" %d ",curr -> data);
}



int main ()

{

  int x,i,p;
  printf("\nPRESS (1) TO INSERT DATA \n");
  printf("\nPRESS (2) TO DELETE DATA \n");
  printf("\nPRESS (3) TO MIN VALUE \n");
  printf("\nPRESS (4) TO MAX VALUE \n");
  printf("\nPRESS (5) TO SEARCH DATA \n");
  printf("\nPRESS (6) FOR PREORDER DATA \n");
  printf("\nPRESS (7) FOR INORDER DATA \n");
  printf("\nPRESS (8) FOR POSTORDER DATA \n");
  printf("\nPRESS (9) TO EXIT \n");


  scanf("%d",&x);
  switch (x)
  {
    case 1:
             printf("ENTER DATA  \n");
             scanf("%d",&i);
             insert (i);
             printf(" HEAD = %d",head -> data);
             return main();

    case 2:

               printf("ENTER THE DATA YOU WANT TO DELETE \n");
               scanf("%d",&p);
               delete(p);
               return main();


    case 3:

             min();
             return main();

  case 4:     max();
             return main();

  case 5:

              printf("SEARCH ENTER NO\n");
              scanf("%d",&p);
              search(p);
              return main();

   case 6:

               preorder(head);
               return main();

   case 7:

               inorder(head);
               return main();

   case  8:

               postorder(head);
               return main();

  case 9:
              printf("\nBYE BYE \n");
              break;

  }

}
