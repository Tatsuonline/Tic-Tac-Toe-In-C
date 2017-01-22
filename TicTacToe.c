#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>

void printTable(char* c1, char* c2, char* c3, char* c4, char* c5, char* c6, char* c7, char* c8, char* c9, char* comp, char* player, char* name);
void computerStart(char* c1, char* c3, char* c7, char* c9, char* comp);
void computerMoveNotMiddle(char* c1, char* c2, char* c3, char* c4, char* c5, char* c6, char* c7, char* c8, char* c9, char* comp, char* player);

int main()
{
  int n = 20;
  char player;
  char comp;
  char X = 'X';
  char O = 'O';
  int pos = 0;
  char c1 = ' ';
  char c2 = ' ';
  char c3 = ' ';
  char c4 = ' ';
  char c5 = ' ';
  char c6 = ' ';
  char c7 = ' ';
  char c8 = ' ';
  char c9 = ' ';

  char* pointer = (char*)malloc(sizeof(n));

  char name[n];

  printf("\nWhat is your name?\n");
  scanf("%s", name); 

  printf("\nHello %s! Welcome to Tic Tac Toe!\n\n", name);

  getchar();

  printf("Would you like to use X or O?\n");
  scanf("%c", &player);

  if (player == X)
    {
      comp = O;
    }
  else
    {
      comp = X;
    }

  printf("\nOkay, let's begin!\n\n");
  computerStart(&c1, &c3, &c7, &c9, &comp);
  //  printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
  
  while (c1 && c2 && c3 != player)
  {
    printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
      printf("Pick a numerical position where you would like to place your %c\n", player);
      scanf("%d", &pos);

      if (pos == 1)
	{
         c1 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
         
      if (pos == 2)
	{
         c2 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
         
      if (pos == 3)
	{
         c3 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
             
      if (pos == 4)
	{
         c4 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
             
      if (pos == 5)
	{
         c5 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         }
             
      if (pos == 6)
	{
         c6 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
             
      if (pos == 7)
	{
         c7 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
             
      if (pos == 8)
	{
         c8 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
             
      if (pos == 9)
	{
         c9 = player;
         printTable(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player, &name);
         computerMoveNotMiddle(&c1, &c2, &c3, &c4, &c5, &c6, &c7, &c8, &c9, &comp, &player);
         }
         }
         
  getchar();  
  free(pointer);
  return 0;
}

void printTable(char* c1, char* c2, char* c3, char* c4, char* c5, char* c6, char* c7, char* c8, char* c9, char* comp, char* player, char* name)
{
	  printf("Computer's attempt:\n\n");
	  printf("                                    KEY\n");
	  printf("     %c|%c|%c                         1|2|3\n", *c1, *c2, *c3);
	  printf("     -----                         -----\n");
	  printf("     %c|%c|%c                         4|5|6\n", *c4, *c5, *c6);
	  printf("     -----                         -----\n");
	  printf("     %c|%c|%c                         7|8|9\n\n", *c7, *c8, *c9);     
	  
	  printf("\n\n%s's attempt:\n\n", name);
	  printf("                                    KEY\n");
	  printf("     %c|%c|%c                         1|2|3\n", *c1, *c2, *c3);
	  printf("     -----                         -----\n");
	  printf("     %c|%c|%c                         4|5|6\n", *c4, *c5, *c6);
	  printf("     -----                         -----\n");
	  printf("     %c|%c|%c                         7|8|9\n\n", *c7, *c8, *c9);
}

void computerStart(char* c1, char* c3, char* c7, char* c9, char* comp)
{
     int move = rand() % 4 + 1;
     if (move == 1)
     {
              *c1 = *comp;
              }
              
     else if(move == 2)
     {
                 *c3 = *comp;
                 }
                 
     else if(move == 3)
     {
                 *c7 = *comp;
                 }
     else if(move == 4)
     {
                 *c9 = *comp;
                 }   
     }

void computerMoveNotMiddle(char* c1, char* c2, char* c3, char* c4, char* c5, char* c6, char* c7, char* c8, char* c9, char* comp, char* player)
{
     if (*c1 == ' ')
     {
             *c1 = *comp;
             }
     
     else if (*c3 == ' ')
     {
             *c3 = *comp;
             }
             
     else if (*c7 == ' ')
     {
             *c7 = *comp;
             }
             
     else if (*c9 == ' ')
     {
             *c9 = *comp;
             }
     }

