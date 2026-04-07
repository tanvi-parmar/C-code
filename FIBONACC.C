#include<stdio.h>
#include<conio.h>
main ()
{       int x,nxt,sum;
	clrscr();

	for(x=1;sum<8;x++)
	{
	printf("%d",x);
	x=nxt;
	nxt=sum;
	sum=x+nxt;
	}

	getch();
	return 0;

}