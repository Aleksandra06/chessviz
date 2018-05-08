#include <stdio.h>
void letters();
void numbers();

int main()
{	letters();
	numbers();
	letters();
	printf("P - pawn, R - rook, H - knight (using 'H'' because 'K' using for King too),\nB - bishop, Q-queen, K - king \n");
	return 0;
}

void letters()
{
	int i;
	char letter='A';
	printf("  #  ");
	for (i=0;i<8;i++)
	{
		printf("%c",letter); printf("   ");
		letter++;
	}
	printf("\n\n");
	letter='A';	
}

void numbers()
{
	int i;
	for (i=1;i<9;i++)
	{
		printf("  "); printf("%d",i); printf(" ");
		if ((i==1) || (i==8))
			printf(" R   H   B   Q   K   B   H   R");	
		//printf("\n\n");
		 if ((i==2) || (i==7))
			printf(" P   P   P   P   P   P   P   P");
		printf("\n\n");
	}
}
