#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n;
	clrscr();
	printf("enter the value of N:-");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i+=2;
	}
	getch();
}
