#include<stdio.h>
#include<conio.h>
void main()
{
	int x[5],i;
	clrscr();
	for(i=0;i<5;i++)
	{
		printf("Enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n\t%d",x[i]);
	}

	getch();

}