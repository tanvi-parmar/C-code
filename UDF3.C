#include<stdio.h>
#include<conio.h>
int xyz();
void main()
{
    int ans;
    clrscr();
    ans=xyz();
    printf("\n\tsum=%d",ans);
    getch();

}
int xyz()
{
	int x,y,z;
	printf("Enter X=");
	scanf("%d",&x);
	printf("Enter Y=");
	scanf("%d",&y);
	z=x+y;
	return z;

}