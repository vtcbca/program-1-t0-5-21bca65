/* write a program to enter number and check which number is maximum number.
date:6/12/21*/
#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     clrscr();
     printf("\n\t enter number:");
     scanf("%d%d%d",&a,&b,&c);
     if((a>b)&&(a>c))
	 printf("\nt%d is maximum number",a);
     else
     {
     if(b>c)
	 printf("\n\t%d is maximum number",b);
     else
	 printf("\n\t%d is maximum number",c);
     }
     getch();
}
