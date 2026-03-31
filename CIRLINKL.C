#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	int data;
	node*next;
};
node *temp;
node *last=NULL;
int count=0;
node *erase;
void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\t Enter Value :");
	scanf("%d",&temp->data);
	if(last==NULL)
	{
		temp->next=temp;
	}
	else
	{
		temp->next=last->next;
		last->next=temp;
	}
	last=temp;
	printf("\n\t Value inserted..!!");
	count++;
}
void disp()
{
	if(last==NULL)
	{
		printf("\n\t Record not found..!!");
	}
	else
	{
		int sr=1;
		do
		{
			temp=temp->next;
			printf("\n\t%d) : %d",sr++,temp->data);
		}while(temp!=last);
	}
}
void del()
{
	if(last==NULL)
	{
		printf("\n\tRecord not found..!!");
	}
	else
	{
		int dv,flag=0;
		printf("\n\t Enter value for delete :");
		scanf("%d",&dv);
		do
		{
			if(temp->next->data==dv)
			{
				erase=temp->next;
				temp->next=erase->next;
				flag=1;
				if(erase==last)
				{
					if(temp==last)
					{
						last=NULL;
						break;
					}
					else
					{
						last=temp;
					}
				}
			}
			temp=temp->next;
		}while(temp!=last);
		if(flag==0)
		{
			printf("\n\tValue %d not found",dv);
		}
		else
		{
			printf("\n\tValue deleted..!!");
			free(erase);
			count--;
		}
	}
}
void srch()
{
	if(last==NULL)
	{
		printf("\n\tRecord not found..!!");
	}
	else
	{
		int sr=1,sv,flag=0;
		printf("\n\t Enter value for search :");
		scanf("%d",&sv);
		do
		{
			temp=temp->next;
			printf("\n\t%d) : %d",sr++,temp->data);
			if(temp->data==sv)
			{
				printf("\t<==Value found here");
				flag=1;
			}
		 }while(temp!=last);
		 if(flag==0)
		 {
			printf("\n\tvalue %d not found..!!",sv);
		 }
	}
}
void updt()
{
	if(last==NULL)
	{
		printf("\n\t Record not found..!!");
	}
	else
	{
		int uv,flag=0;
		disp();
		temp=temp->next;
		printf("\n\t Enter value for update : ");
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
		printf("\n\tValue updated..!!");
		if(flag==0)
		{
			printf("\n\tValue %d not found",uv);
		}
	}
}
void main()
{
	int ch;
	while(1)
	{
		clrscr();
		printf("\t1)Add data");
		printf("\n\t2)Display data");
		printf("\n\t3)Delete data");
		printf("\n\t4)Search data");
		printf("\n\t5)Update data");
		printf("\n\t6)Count data");
		printf("\n\t7)Insert data");
		printf("\n\t8)Exit");
		printf("\n\n\t Enter your choice : ");
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
				updt();
				break;
			case 6:
				printf("\n\t Total count : %d",count);
				break;
			case 7:
				insrt();
				break;
			case 8:
				exit();
			default:
				printf("\n\tInvalid choice..!!");

		}
		getch();
	}
}