#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,sum=0,z;
	clrscr();
	printf("enter a number");
	scanf("%d",&n);
	z=n;
	while(n>0)
	{
		r=n%10;
		n=n/10;
		sum=sum*10+r;
	}
	if(z==sum)
	{
		printf("the number is a palindrome");
	  }
	  else
	  {
		printf("the number is not a palindrome");
	  }
	  getch();
}