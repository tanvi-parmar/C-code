#include<stdio.h>
#include<conio.h>
main ()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t%d",j);
		}
		printf("\n\n");
	}
	getch();
	return 0;

}