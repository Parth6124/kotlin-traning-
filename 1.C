#include<stdio.h>
#include<conio.h>
void main()
{
	int first_term=0,second_term=1,next_term,i;
	clrscr();
	printf("\nfirst 15 term of fibonacci series:");
	for(i=0;i<15;i++)
	{
		if(i<=1)
		{
			next_term=i;
		}
		else
		{
			next_term=first_term+second_term;
			first_term=second_term;
			second_term=next_term;
		}
		printf("\n%d",next_term);


	}
	getch();
}
