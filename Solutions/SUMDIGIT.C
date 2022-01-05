#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,sum=0;
	clrscr();
	printf("enter any number:");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%10;
		sum=sum+b;
		a=a/10;
	}
	printf("sum of digites is %d",sum);
	getch();
}