#include<stdio.h>
#include<conio.h>
void xyz(int,int);
void main()
{
    int x,y;
    clrscr();
    printf("Enter X=");
    scanf("%d",&x);
    printf("Enter Y=");
    scanf("%d",&y);
    xyz(x,y);
    getch();

}
void xyz(int a,int b)
{
	int z=a+b;
	printf("\n\tsum=%d",z);

}
