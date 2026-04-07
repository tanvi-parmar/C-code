#include<stdio.h>
#include<conio.h>
main()
{       int x,y,z;
	clrscr();
	printf("enter the value of X=");
	scanf("%d",&x);
	printf("enter the value of Y=");
	scanf("%d",&y);
	printf("enter the value of Z=");
	scanf("%d",&z);
	if(x>y)
	{
		if(x>z)
		{
		printf("X=%d",x);
		}

		else
		{
		printf("Z=%d",z);
		}
	}
	else
	{
	     if(y>z)
	     {
	     printf("Y=%d",y);
	     }
	     else
	     {
	      printf("Z=%d",z);
	     }
	}

	getch();
	return 0;

}