#include <stdio.h>
#include <stdlib.h>

int desk(char mass[9][9])
{
  int i,j;
  for (i=0;i<9;i++)
    {
    for (j=0;j<9;j++)
      {
	mass[i][j]=i+j;
      printf ("  %c  ",mass[i][j]);
      }
    printf("\n\n");
    }
  return 0;
 }

int main()
{
  char mass[9][9];
  desk(mass[9][9]);
  return 0;
}
