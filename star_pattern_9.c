#include<stdio.h>
int main()
{
	int a;
	for(int i=1;i<=5;i++)
	{
		a=1;
		for(int j=1;j<=9;j++)
		{
			if(j>=6-i&&j<=4+i&&a)
			{
				printf("*");
				a=0;
			}
			else
			{
				printf(" ");
				a=1;
			}
		}
		printf("\n");
	}
	return 0;
}
