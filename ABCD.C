#include<stdio.h>
#include<conio.h>
main()
{       int i;
	clrscr();
	for(i=65;i<=90;i++)
	{
		printf("\t%c",i);
	}
	printf("\n\n\n");
	for(i=97;i<=122;i++)
	{
		printf("\t%c",i);
	}
	getch();
	return 0;
}