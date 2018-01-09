#include <stdio.h>
#include<stdlib.h>
int main()
{
   int choice;
   printf("ENTER 1. FOR HORROR MOVIES\n ENTER 2. FOR COMEDY MOVIES\n ENTER 3. FOR ACTION MOVIES\n");
   scanf("%d",&choice);
   switch(choice)
   { case 1:
              printf("NAILS\nINSIDIOUS\nEXORCIST\nCONJURING\nOUIJA");
              break;
              case 2:
                printf("22 JUMPSTREET\nSCARY MOVIE\nRIDE ALONG\nHEERA PHEERI");
                break;
                case 3:
                  printf("BAYWATCH\nSPIDERMAN\nSUPERMAN\nSUICIDE SQUAD");
                  break;
                  default:
                  printf("WRONG INPUT");




   }



}
