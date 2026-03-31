#include<stdio.h>
#include<conio.h>
#define size 5
int x[size],front=0,rear=0,search,flag=0,i;
void add()
{
	if(rear==size)
	{
		printf("\n\tQueue is full.!!");
	}
	else
	{
		printf("\n\tEnter Value :");
		scanf("%d",&x[rear]);
		rear++;
		printf("\n\t Value inserted.!!");
	}
}
void disp()
{
	if(rear==0)
	{
		printf("\n\t Queue is empty.!!");
	}
	else
	{       int i;
		for(i=front;i<rear;i++)
		printf("\n%d) : %d",i+1,x[i]);
	}
}
void del()
{
	if(rear==0)
	{
		printf("\n\tQueue is empty.!!");
	}
	else
	{
		printf("\n\tValue %d is deleted",x[front]);
		front++;
		if(front==rear)
		{
			front=0;
			rear=0;
		}
	}
}
void srch()
{
	printf("\n\t Enter search value : ");
	scanf("%d",&search);

	for(i=front;i<rear;i++)
	{
		printf("\n%d) : %d",i+1,x[i]);
		if(x[i]==search)
		{
			printf("\t<==value found at here");
			flag=1;
		}
	 }
	 if(flag==0)
		printf("\n\tvalue Not found..!!");
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
		printf("\n4)Search data");
		printf("\n5) Exit");
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
			      printf("\n\tInvalid Choice..!!");

		}
		getch();
	}
}