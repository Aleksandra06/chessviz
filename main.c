#include <stdio.h>
#include <stdlib.h>

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



int game(char mass[][9])
{
  //
  return printf("\nGame over!\n");
}

int move()
{
  return 0;
}

int main()
{
  char mass[9][9];
  start(mass);
  desk(mass);
  game(mass);
  return 0;
}
