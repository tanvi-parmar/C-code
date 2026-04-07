#include<stdio.h>
#include<conio.h>
int xyz(int,int);
void main()
{
	int x,y,ans;
	clrscr();
	printf("Enter X=");
	scanf("%d",&x);
	printf("Enter Y=");
	scanf("%d",&y);
	ans=xyz(x,y);
	printf("\n\tx+y=%d",ans);
	getch();

}
int xyz(int a,int b)
{
	int z=a+b;
	return z;

}