#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	node *pre;
	int data;
	node *next;
};
node *temp;
node *last;
node *pre;
int count=0;

void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\tEnter Value:");
	scanf("%d",&temp->data);
	if(last==NULL)
	{
		temp->next=temp;
		temp->pre=temp;
	}
	else
	{
		temp->pre=last;
		temp->next=last->next;
		last->next=temp;
		last->pre=temp;
	}
	last=temp;
	printf("\n\tValue inserted..!!");
	count++;
}

void disp()
{
	if(last==NULL)
	{
		printf("\n\tRecord not found..!!");
	}
	else
	{
		do
		{
			int sr=1;
			temp=temp->next;
			printf("\n\t%d): %d",sr++,temp->data);
		}while(temp!=last);
	}
}

void updt()
{
	if(last==NULL)
	{
		printf("\n\tRecord not found..!!");
	}
	else
	{
		int uv,flag=0;
		disp();
		printf("\n\tEnter value for update:");
		scanf("%d",&uv);
		do
		{
			if(temp->data==uv)
			{
				printf("\n\tEnter new value:");
				scanf("%d",&temp->data);
				flag=1;
			}
			temp=temp->next;
		}while(temp!=last);
		printf("\n\tValue inserted..!!");
		if(flag==0)
		{
			printf("\n\tValue not found..!!");
		}
	}
}

void srch()
{

}

void del()
{

}
void main()
{
	int ch;
	while(1)
	{
		clrscr();
		printf(" 1)Add data");
		printf("\n 2)Display data");
		printf("\n 3)Update data");
		printf("\n 4)Search data");
		printf("\n 5)Count data");
		printf("\n 6)Delete data");
		printf("\n 7)Exit");
		printf("\n\n\t Enter your choice:");
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
				updt();
				break;
			case 4:
				srch();
				break;
			case 5:
				printf("\n\t Total Count : %d",count);
				break;
			case 6:
				del();
				break;
			case 7:
				exit();
			default:
				printf("\n\tInvalid choice..!!");
		}
		getch();
	}
}