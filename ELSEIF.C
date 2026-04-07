#include<stdio.h>
#include<conio.h>
main()
{       int x,y,ch;
	clrscr();
	printf("1=addition");
	printf("\n2=substraction");
	printf("\n3=multiplication");
	printf("\n4=division");
	printf("\n\nEnter the value of X=");
	scanf("%d",&x);
	printf("\nEnter the value of Y=");
	scanf("%d",&y);
	printf("\nchoose number=");
	scanf("%d",&ch);
	if(ch==1)
	{
		 printf("\nX+Y=%d",x+y);
	}
	else if(ch==2)
	{
		printf("\nX-Y=%d",x-y);
	}
	else if(ch==3)
	{
		printf("\nX*Y=%d",x*y);
	}
	else if(ch==4)
	{
		printf("\nX/y=%d",x/y);
	}
	else
	{
		printf("\ninvalid choice...!");
	}
	getch();
	return 0;

}