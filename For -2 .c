// print 1 to N number

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter the value N \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",i);
	}
	getch();
}