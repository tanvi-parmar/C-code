#include<stdio.h>
#include<conio.h>
void main()
{
	int x[10],i,sum=0;
	clrscr();
	for(i=0;i<10;i++)
	{
		printf("Enter value %d:",i+1);
		scanf("%d",&x[i]);
	}
	for(i=0;i<10;i++)
	{
		if(x[i]%2==0)
		{
			sum=sum+x[i];
		}

	}
		printf("\n\tsum of even value is=%d",sum);

	getch();

}
