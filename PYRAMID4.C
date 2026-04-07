#include<stdio.h>
#include<conio.h>
main()
{       int i,j,x;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
		 printf("\t%d",j%2==0);
		}
	printf("\t\n\n");
	}
	getch();
	return 0;
}