#include<stdio.h>
#include<conio.h>
void main()
{
	int a,n,p=0,t;
	clrscr();
	printf("enter any number");
	scanf("%d",&n);
	t=n;
	while(n>0)
	{
		a=n%10;
		p=p+a*a*a;
		n=n/10;
	}
		if(p==t)
		printf("\n number is armstrong");
		else
		printf("\n number is not armstrong");
		getch();
}