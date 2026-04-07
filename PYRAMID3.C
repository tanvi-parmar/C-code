#include<stdio.h>
#include<conio.h>
main()
{       int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
		 printf("\t%d",j);
		}
		printf("\t\n\n");
	}
	getch();
	return 0;
}