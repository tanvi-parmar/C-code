#include<stdio.h>
#include<conio.h>
void main()
{
	 int x[10],i,srch,first=0,last=9,mid=(first+last)/2,flag=0;

	 clrscr();
	 for(i=0;i<10;i++)
	 {
		printf("\nEnter Value %d) : ",i+1);
		scanf("%d",&x[i]);
	 }
	 printf("\n\tEnter search value : ");
	 scanf("%d",&srch);
		 while(first<=last && flag==0)
		 {
			if(srch==x[mid])
			{
				printf("\n\tValue Found.!!");
				flag=1;
			}
			else if(srch<x[mid])
			{
				last=mid-1;
				mid=(first+last)/2;
			}
			else
			{
				first=mid+1;
				mid=(first+last)/2;
			}
		 }
		 if(flag==0)
		 {
			printf("\n\t Value NOT found.!!");
		 }
		 getch();

}