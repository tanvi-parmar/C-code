#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
int x[size],rear=-1,front=-1;
void add()
{
	if((rear+1)%size==front)
	{
		printf("\n\t Queue is full..!!");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		if(rear<size-1)
		{
			rear++;
		}
		else
		{
			rear=0;
		}
		printf("\n\tEnter Value : ");
		scanf("%d",&x[rear]);
		printf("\n\t Inserted.!!");
	}
}
void disp()
{
	if(rear==-1)
	{
		printf("\n\t Queue is empty..!!");
	}
	else
	{
		int i;
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("\t%d",x[i]);
			}
		}
		else
		{
			for(i=front;i<size;i++)
			{
				printf("\t%d",x[i]);
			}

			for(i=0;i<=rear;i++)
			{
				printf("\t%d",x[i]);
			}
		}
	}
 }
void del()
{
	if(front==-1)
	{
		printf("\n\t Queue is empty..!!");
	}
	else
	{
		printf("\n\t value %d is removed",x[front]);
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else if(front<size-1)
		{
			front++;
		}
		else
		{
			front=0;
		}
	}
}

void main()
{
	int ch;
	while(1)
	{
		clrscr();
		printf("1) Add data");
		printf("\n2) Display data");
		printf("\n3) Delete data");
		printf("\n4) Exit");
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
				exit(0);
			default:
				printf("\n\tInvalid choice.!!");
		}
		getch();

	}
}