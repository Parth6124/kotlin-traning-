#include<stdio.h>
#include<conio.h>
void main()
{
	int a=0,b=1,ans,i;
	clrscr();
	printf("\nfirst 15 term of fibonacci series:");
	for(i=0;i<15;i++)
	{
		if(i<=1)
		{
			ans=i;
		}
		else
		{
			ans=a+b;
			a=b;
			b=ans;
		}
		printf("\n%d",ans);


	}
	getch();
}
