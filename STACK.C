#include<stdio.h>
#include<conio.h>
#define size 5
int tos=-1,x[size],i;
void add()
{
	if(tos<size-1)
	{
		tos++;
		printf("\n\tEnter value :");
		scanf("%d",&x[tos]);
		printf("\n\tValue inserted successfully..!!");
	}
	else
	{
		printf("\n\tstack is full..!!");
	}
}
void disp()
{
	if(tos==-1)
	{
		printf("\n\t Record not found..!!");
	}
	else
	{
		for(i=0;i<tos;i++)
		{
			printf("\n\t%d) : %d",i+1,x[i]);
		}
	}
}
void del()
{
	if(tos==-1)
	{
		printf("\n\tRecord not found..!!");
	}
	else
	{
		tos--;
		printf("\n\tvalue %d is deleted",x[tos]);
	}
}
void srch()
{

}
void main()
{
	int ch;
	while(1)
	{
		clrscr();
		printf("1)Add Data");
		printf("\n2)Display Data");
		printf("\n3)Delete Data");
		printf("\n4)Search Data");
		printf("\n5)Exit");
		printf("\n\tEnter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				add();
				break;
			case 2:
				disp();
				break;
			case 3:
				del();
				break;
			case 4:
				srch();
				break;
			case 5:
				exit();
			default:
				printf("\n\tInvalid choice..!!");
		}
		getch();
	}
}