#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,o,p=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&n);
	i=n;
	while (n>0)
	{
		o=n%10;
		p=o+(p*10);
		n=n/10;
	}
		if(i==p)
		printf("\n number is palindromic");
		else
		printf("\n number is not palindromic");
		getch();
}