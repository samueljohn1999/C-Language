#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct fr
{
  char nm[7];
  //person link
  struct fr *nex;

};



struct node
{
  char name[7];
  char password[10];
  struct node *next;
  struct fr *frinext;

};

struct node *head=NULL;

void new()
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp -> next = NULL;
  temp -> frinext=NULL;
  printf("ENTER A NAME \n");
  scanf("%s", temp-> name);
  printf("ENTER ACCOUNT PASSWORD - password limit 10 characters \n");
  scanf("%s", temp -> password);
  printf("YOUR ACCOUNT NAME IS %s\n",temp -> name);
  printf("YOUR PASSWORD IS = %s     --DONT FORGET IT\n", temp -> password);
  if (head == NULL)
  {
    head = temp;
    return;
  }
  struct node *loo;
  loo = head;
  while (loo -> next != NULL)
  {
    loo = loo ->next;
  }
  loo -> next = temp;


}

void friends(struct node *friends)
{
  char frnam[7];
  int ans;
  struct fr *pp;
  pp = (struct fr*)malloc(sizeof(struct fr));
  printf("SEARCH FOR FRIENDS ....ENTER FRIEND NAME\n");
  scanf("%s",frnam);
  struct node *temp;
  temp = head;
  while (temp != NULL)
  {
    if (strcmp (frnam,temp->name) == 0)
    //have to put the option to add one friend there are two persons with similiar name
    {
      printf("FRIEND FOUND \n");
      printf("ARE YOU SURE YOU WANT TO ADD HIM IF YES PRESS (0) IF NO PRESS (1)\n");
      scanf("%d",&ans);
      if (ans == 0)
      {

        if (friends -> frinext == NULL)
        {
          strcpy (pp->nm ,temp -> name);//from down here mistake is occuring
          pp -> nex = NULL;
          friends -> frinext = pp ;
          printf("FRIEND ADDED \nYOUR FIRST FRIEND IS  ");
          //create a new structure attach that node to friend and in that node will consist person name and next
          printf("%s\n",friends ->frinext ->nm);
          printf("%p\n",friends ->frinext ->nex);
          return;

        }

       else if (friends -> frinext != NULL)
        {
          strcpy (pp->nm ,temp -> name);
          pp -> nex = NULL;
          struct fr *frex;
          struct fr *print;
          print = friends -> frinext;
          frex = friends -> frinext;
          while (frex -> nex != NULL )
          {
            frex = frex->nex;
          }
          frex -> nex = pp;
          printf("YOUR FRIENDS ARE \n");
          while(print  != NULL)
          {
            printf("\n%s ",print ->nm);
            print = print -> nex;
          }

          return;

        }

      }
      if (ans == 1);
      {
        printf("OK\n");
        return;
      }
    }
    temp = temp -> next;
  }

  {
    printf("FRIEND NAME NOT FOUND \n");
  }

}

void login()
{
  int a;
  char nam[7],passw[10];
  struct node *logintemp;
  logintemp = head;
  printf("ENTER YOUR ACCOUNT/USER NAME \n");
  scanf("%s", nam);
  printf("ENTER YOUR PASSWORD \n");
  scanf("%s", passw);
  while (logintemp != NULL)
  {
    if (strcmp (logintemp->name,nam) == 0)
    {
      if (strcmp (logintemp -> password,passw) == 0)
      {
        printf("PASSWORD IS MATCHED \nYOU ARE LOGGED IN\n\n");
        printf("DO YOU WANT TO ADD FRIENDS IF YES PRESS 1\n");
        printf("DO YOU WANT TO LOG OUT -- IF YES PRESS 2\n");
        scanf("%d",&a);
        switch (a)
        {
          case 1:
                   friends(logintemp);

          case 2:
                  return;


        }
      }
      else
      {
        printf("USER NAME / PASSWORD IS INCORRECT PLS TRY AGAIN\n");
        return login();
      }
      return;
    }
    logintemp = logintemp -> next;
  }



}

int main()
  {

    int q;
    printf("\nENTER YOUR CHOICE \n");
    printf("PRESS 1 TO CREATE A NEW ACCOUNT \n");
    printf("PRESS 2 TO LOG-IN TO YOUR ACCOUNT \n");
    printf("EXIT PRESS 3\n");

    scanf("%d",&q);
    switch(q)
    {
      case 1:

              new();
              return main();

      case 2:

              login();
              return main();

       case 3:
               printf("BYE\n");
               break;




    }

}
