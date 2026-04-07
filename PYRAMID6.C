#include<stdio.h>
#include<conio.h>
main()
{       int i,j,x=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
		 printf("\t%d",x++);
		}
	printf("\t\n\n");
	}
	getch();
	return 0;
}