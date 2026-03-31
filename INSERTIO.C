#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
	int x[size],i,j,temp;
	clrscr();
	for(i=0;i<size;i++)
	{
		printf("Enter value %d :",i+1);
		scanf("%d",&x[i]);
	}
	for(i=1;i<size;i++)
	{
		j=i-1;
		temp=x[i];
		while(temp<x[j] && j>=0)
		{
			x[j+1]=x[j];
			j--;
		}
		x[j+1]=temp;

	}
	for(i=0;i<size;i++)
	{
		printf("\n\t %d) : %d",i+1,x[i]);
	}
	getch();
}