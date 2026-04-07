void xyz();
void main()
{

    clrscr();
    xyz();
    getch();

}
void xyz()
{
	int x,y,z;
	printf("Enter X=");
	scanf("%d",&x);
	printf("Enter Y=");
	scanf("%d",&y);
	z=x+y;
	printf("\n\tsum=%d",z);

}