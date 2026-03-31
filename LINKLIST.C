#include<stdio.h>
#include<conio.h>
typedef struct xyz node;
struct xyz
{
	int data;
	node *next;
};
node *temp;
node *first=NULL;
node *last;
node *erase;
node *ins;
int count=0;

void add()
{
	temp=(node*)malloc(sizeof(node));
	printf("\n\n\t Enter value :");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
	}
	else
	{
		last->next=temp;
	}
	last=temp;
	count++;
	printf("\n\n\t value inserted successfully..!!");
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
void del()
{
	if(first==NULL)
	{
		 printf("\n\tRecord not found..!!");
	}
	else
	{
		int dv,flag=0;
		printf("\n\t Enter value for delete :");
		scanf("%d",&dv);
		if(first->data==dv)
		{
			erase=first;
			first=first->next;
			flag=1;
		}
		else
		{
			temp=first;
			while(temp!=NULL)
			{
				if(temp->next->data==dv)
				{
					erase=temp->next;
					if(erase==last)
					{
						last=temp;
					}
					temp->next=erase->next;
					flag=1;
				}
				temp=temp->next;
			}
		}
		if(flag==0)
		{
			printf("\n\t value %d is not found",dv);
		}
		else
		{
			free(erase);
			printf("\n\t value deleted..!!");
			count--;
		}
	}

}

void insrt()
{
	if(first==NULL)
	{
		add();
	}
	else
	{
		int pos;
		printf("\n\t Enter position : ");
		scanf("%d",&pos);
		if(pos>count)
		{
			add();
		}
		else
		{
			ins=(node*)malloc(sizeof(node));
			printf("\n\t Enter value : ");
			scanf("%d",&ins->data);
			if(pos==1)
			{
				ins->next=first;
				first=ins;
			}
			else
			{
				int i;
				temp=first;
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}
				ins->next=temp->next;
				temp->next=ins;

			}
			printf("\n\tvalue inserted successfully..!!");
			count++;
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
		printf("\n3) Search data");
		printf("\n4) Update data");
		printf("\n5) Delete data");
		printf("\n6) Insert data");
		printf("\n7) Exit");
		printf("\n8) count data");
		printf("\n\nEnter your choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1:
				add();
				break;
			case 2:
				disp();
				break;
			case 3:
				srch();
				break;
			case 4:
				updt();
				break;
			case 5:
				del();
				break;
			case 6:
				insrt();
				break;
			case 7:
				exit();
			case 8:
				printf("\nTotal count : %d",count);
				break;
			default:
				printf("\n Invalid choice..!!");

		}
		getch();
	}

}