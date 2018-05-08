#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdlib.h>

int desk(char mass[9][9])
{
  int i,j;
  for (i=0;i<9;i++)
    {
    for (j=0;j<9;j++)
      {
      printf ("  %c  ",mass[i][j]);
      }
    printf("\n\n");
    }
  printf("\n\n\n");
  return 0;
 }

int start(char mass[][9])
{
  for (int i=0;i<9;i++)
    for (int j=0;j<9;j++)
mass[i][j]=' ';
mass[0][0]='X'; mass[1][0]='8';		mass[1][1]='R';	mass[2][1]='P';		mass[7][1]='p';	mass[8][1]='r';
mass[0][1]='A';	mass[2][0]='7';		mass[1][2]='N';	mass[2][2]='P';		mass[7][2]='p';	mass[8][2]='n';
mass[0][2]='B';	mass[3][0]='6';		mass[1][3]='B';	mass[2][3]='P';		mass[7][3]='p';	mass[8][3]='b';
mass[0][3]='C';	mass[4][0]='5';		mass[1][4]='Q';	mass[2][4]='P';		mass[7][4]='p';	mass[8][4]='q';
mass[0][4]='D';	mass[5][0]='4';		mass[1][5]='K';	mass[2][5]='P';		mass[7][5]='p';	mass[8][5]='k';
mass[0][5]='E';	mass[6][0]='3';		mass[1][6]='B';	mass[2][6]='P';		mass[7][6]='p';	mass[8][6]='b';
mass[0][6]='F';	mass[7][0]='2';		mass[1][7]='N';	mass[2][7]='P';		mass[7][7]='p';	mass[8][7]='n';	
mass[0][7]='G';	mass[8][0]='1';		mass[1][8]='R';	mass[2][8]='P';		mass[7][8]='p';	mass[8][8]='r';
mass[0][8]='H';
 return printf("Format of move - 'a2-a4'\nMove realize only for 'P(p)'\n");
}

int move(char mass[9][9])
{
  int FlagOfEnd=0;
  char stepper[7];
  printf("Turn is :\n");
  scanf("%s", stepper);
  printf("\nWrite 'End' to end\n");
 if(!strcmp("a2-a3", stepper))
  {
   mass[7][1]=' ';
   mass[6][1]='p';
  }
 if (!strcmp("a2-a4", stepper))
   { 
    mass[7][1]=' ';
    mass[5][1]='p';
   }
  if(!strcmp("b2-b3", stepper))
  {
   mass[7][2]=' ';
   mass[6][2]='p';
  }
 if (!strcmp("b2-b4", stepper))
   { 
    mass[7][2]=' ';
    mass[5][2]='p';
   }
  if(!strcmp("c2-c3", stepper))
  {
   mass[7][3]=' ';
   mass[6][3]='p';
  }
 if (!strcmp("c2-c4", stepper))
   { 
    mass[7][3]=' ';
    mass[5][3]='p';
   }
 if(!strcmp("d2-d3", stepper))
  {
   mass[7][4]=' ';
   mass[6][4]='p';
  }
 if (!strcmp("d2-d4", stepper))
   { 
    mass[7][4]=' ';
    mass[5][4]='p';
   }
 if(!strcmp("e2-e3", stepper))
  {
   mass[7][5]=' ';
   mass[6][5]='p';
  }
 if (!strcmp("e2-e4", stepper))
   { 
    mass[7][5]=' ';
    mass[5][5]='p';
   }
 if(!strcmp("f2-f3", stepper))
  {
   mass[7][6]=' ';
   mass[6][6]='p';
  }
 if (!strcmp("f2-f4", stepper))
   { 
    mass[7][6]=' ';
    mass[5][6]='p';
   }
 if(!strcmp("g2-g3", stepper))
  {
   mass[7][7]=' ';
   mass[6][7]='p';
  }
 if (!strcmp("g2-g4", stepper))
   { 
    mass[7][7]=' ';
    mass[5][7]='p';
   }
 if(!strcmp("h2-h3", stepper))
  {
   mass[7][8]=' ';
   mass[6][8]='p';
  }
 if (!strcmp("h2-h4", stepper))
   { 
    mass[7][8]=' ';
    mass[5][8]='p';
   }
if(!strcmp("End", stepper))
   {
   FlagOfEnd=1;
   }
if (FlagOfEnd==1)
  {
  printf("\nWrong format\n\n"); 
  }
  return 0;
}

int game(char mass[9][9])
{
  while (1)
  {
  int step=1;
  move(mass);
  printf("\nStep #%d\n\n", step);
  step++;
  desk(mass);
  }	
  return printf("\nGame over!\n");
}

int main()
{
  char mass[9][9];
  start(mass);
  desk(mass);
  game(mass);
  return 0;
}
