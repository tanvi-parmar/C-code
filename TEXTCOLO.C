#include<stdio.h>
#include<conio.h>
main()
{       int i;
	clrscr();
	for(i=0;i<=15;i++)
	{
		textcolor(i);
		printf("\n\t(%d)",i+1);
		cprintf("Atmiya");
	}
	getch();
	return 0;
}