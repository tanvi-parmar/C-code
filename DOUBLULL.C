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
node *first=NULL;
node *last;
node *pre;
int count=0;
void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\tEnter value:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
		first->pre=NULL;
	}
	else
	{
		last->next=temp;
		temp->pre=last;
	}
	last=temp;
	count++;
	printf("\n\t value inserted..!!");
}

void disp()
{
	if(first==NULL)
	{
		printf("\n\t Record not found..!!");
	}
	else
	{
		int sr=1;
		temp=first;
		while(temp!= NULL)
		{
			printf("\n\t %d) : %d",sr++,temp->data);
			temp=temp->next;
		}
	}
}

void updt()
{
	if(first==NULL)
	{
		printf("\n\t Record not found..!!");
	}
	else
	{
		int uv,flag=0;
		disp();
		temp=first;
		printf("\n\t Enter value for update :");
		scanf("%d",&uv);
		while(temp!=NULL)
		{
			if(temp->data==uv)
			{
				printf("\n\t Enter new value :");
				scanf("%d",&temp->data);
				flag=1;
			}
			temp=temp->next;
		}
		if(flag==0)
			printf("\n\tvalue %d not found..",uv);
		else
		{
			printf("\n\t value upadated..");
		}
	}
}
void srch()
{


	if(first==NULL)
	{
		printf("\n\t Record not found..!!");
	}
	else
	{
		int sr=1,sv,flag=0;
		temp=first;
		printf("\n\tEnter search value : ");
		scanf("%d",&sv);
		while(temp!=NULL)
		{
			printf("\n\t %d : %d",sr++,temp->data);
			if(temp->data==sv)
			{
				printf("  <==value found here");
				flag=1;
			}
		temp=temp->next;
		}
		if(flag==0)
		{
				printf("\n\tValue %d not found",sv);
		}
	}
}
void del()
{
	if(first==NULL)
	{
		printf("\n\t Record not found..!!");
	}
	else
	{
		int dv,flag=0;
		printf("\n\t Enter value for delete:");
		scanf("%d",&dv);
		temp=first;
		while(temp!=NULL)
		{
			if(temp->data==dv)
			{
				if(temp==first)
				{
					if(first==last)
					{
						first=NULL;
					}
					else
					{
						first=first->next;
						first->pre=NULL;
					}
				}
				else if(temp==last)
				{
					last=last->pre;
					last->next=NULL;
				}
				else
				{
					temp->pre->next=temp->next;
					temp->next->pre=temp->pre;
				}
				free(temp);
				flag=1;
				count--;
				printf("\n\tValue deleted..!!");
				}
			temp=temp->next;
		}
		if(flag==0)
		{
			printf("\n\tValue %d not found..!!",dv);
		}
	}

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