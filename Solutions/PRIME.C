#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,c=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	for(i=2;i>=n;i++)
	i=1;
	while(i<n)
	{
		if(n%i==0)
		c=1;
		break;
	}
		if (c==0)
		printf("\n number is prime ");
		else
		printf("\n number is not prime ");
		getch();
}